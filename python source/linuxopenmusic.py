#!/usr/bin/python
# -*- coding: UTF-8 -*-
def install_and_import(package):
    import importlib
    try:
        importlib.import_module(package)
    except ImportError:
        import pip
        pip.main(['install', package])
    finally:
        globals()[package] = importlib.import_module(package)
install_and_import('sqlite3')
install_and_import('sys')
install_and_import('getopt')
install_and_import('re')
install_and_import('argparse')
install_and_import('grab')
install_and_import('logging')
install_and_import('urllib')
install_and_import('bs4')
install_and_import('pycurl')
install_and_import('time')
install_and_import('os')
install_and_import('base64')
install_and_import('requests')
install_and_import('json')
install_and_import('datetime')
if sys.version_info >= (3, 0):
    from urllib.parse import urlencode
else:
    from urllib import urlencode
from humanize import naturalsize
from grab import Grab
from bs4 import BeautifulSoup
    
#variaveis globais#

parser = argparse.ArgumentParser(description='This is a demo script by nixCraft.')
parser.add_argument('-s','--search', help='Input search name')
parser.add_argument('-p','--popular',help='Search in popular category', type=int, choices=[0,1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
parser.add_argument('-n','--number-downloads',help='Search in popular category', type=int)
parser.add_argument('-u','--update',help='update', action='store_true')
parser.add_argument('-f','--force-update',help='update', action='store_true')
parser.add_argument('-l','--list',help='update')
parser.add_argument('-y','--spotify',help='update')
parser.add_argument('-L','--save-list',help='update', action='store_true')
parser.add_argument('-a','--artista',help='update')
parser.add_argument('-A','--only_artista',help='update', action='store_true')

f=open("baixadas.txt","a")
f.write("")

f=open("songnotfound.txt","a")
f.write("")

args = parser.parse_args()
connection = sqlite3.connect("database.db")
g = Grab()
links = []
musicas = []
artistas = []
spotifymusica = []
spotifyartista = []
spotifyalbum = []

START_TIME = None
i=0


def progress(download_t, download_d, upload_t, upload_d):
    if int(download_t) == 0:
        return
    global START_TIME
    if START_TIME is None:
        START_TIME = time.time()
    duration = time.time() - START_TIME + 1
    speed = download_d / duration
    speed_s = naturalsize(speed, binary=True)
    speed_s += '/s'
    if int(download_d) == 0:
        download_d == 0.01
    p = '%s/%s (%.2f%%) %s %s\r' % (naturalsize(download_d, binary=True),
                                    naturalsize(download_t, binary=True),
                                    download_d / download_t, speed_s, ' ' * 10)
    sys.stderr.write(p)
    sys.stderr.flush()
def baixarf(nome,link):
    with open(nome+'.mp3', 'ab') as f:
                c = pycurl.Curl()
                c.setopt(c.URL, link)
                c.setopt(pycurl.RESUME_FROM, os.path.getsize(nome+'.mp3'))
                c.setopt(c.WRITEFUNCTION, f.write)
                c.setopt(c.NOPROGRESS, 0)
                c.setopt(c.PROGRESSFUNCTION, progress)
                c.perform()
def baixar(nome,link):
    c = pycurl.Curl()
    c.setopt(c.URL, link)
    c.setopt(c.NOBODY, 1)
    c.perform()
    size=c.getinfo(c.CONTENT_LENGTH_DOWNLOAD)
    artista=nome.split("-")[1]
    musica=nome.split("-")[0]
    if size<=200:
        busca(None, musica,artista,None)
        buscaf(musica,artista,None)
    else:
        if os.path.exists(nome+'.mp3'):
            if float(os.path.getsize(nome+'.mp3'))>=size:
                print ("arquivo ja baixado")
                f=open("baixadas.txt","a")
                f.write("musica:%s artista:%s \n"%(musica,artista))
            else: 
                print ("arquivo existe resumindo")
                baixarf(nome,link)
                f=open("baixadas.txt","a")
                f.write("musica:%s artista:%s \n"%(musica,artista))
        else:
            print ("arquivo nao existe, baixando")
            baixarf(nome,link)
            f=open("baixadas.txt","a")
            f.write("musica:%s artista:%s \n"%(musica,artista))
            
def refresh_token():
    payload = { 'grant_type': 'client_credentials'}
    auth_header = 'NDUwMGY3ODdiZDM4NGQzMTg4NGI0MzMyMTllMTQ1OWU6ZDRiOTFmMTRmMTBlNDQyYWJkYmJiYjY1OGNlYjg1NDY='
    headers = {'Authorization': 'Basic %s' % auth_header}
    response = requests.post('https://accounts.spotify.com/api/token', data=payload, headers=headers, verify=True)
    token = response.json()
    return token['access_token'] 

def login():
    print ("wait till we login in the servers")
    g.go('http://vk.com/search')
    print ("abrindo site")
    g.doc.set_input('email', 'linuxopenmusic@gmail.com')
    g.doc.set_input('pass', 'linuxopenmusic')
    print ("submetendo")
    g.doc.submit()
    print ("login done")
    return

def busca(ge,busca,artista,porc):
    os.system('clear')
    if ge is not None:
        qs = urlencode({'act': 'popular', 'genre': ge})
        g.go('http://vk.com/audios328513317?%s' % qs)
        gen=ge
    if busca is not None:
        a=re.sub(' ','+',busca,5)
        if args.only_artista is not None:
            qs = urlencode({'c[performer]': '1','c[q]': artista, 'c[section]': 'audio'})
        else:
            qs = urlencode({'c[q]': a+"+"+artista, 'c[section]': 'audio'})
        g.go('http://vk.com/search?%s' % qs)
        gen=99    
    print (porc)
    print ("musica:%s artista:%s"%(busca,artista))
    print ("now saving informarion for the downloads, this will be slow")
    links = []
    musicas = []
    artistas = []
    soup = BeautifulSoup(g.response.body,"lxml")
    enderecos=soup.findAll("input",{'type':'hidden'})
    nomemusica=soup.findAll("span",{'class':'title'})
    nomeartista=soup.findAll("a")
    print ("(1) geting artistas")    

    for n in nomeartista:
        artista=str(n)
        if "]=1" in artista:
            artista=artista.replace('<span class="match">','')
            artista=artista.replace('</span>','')
            artista=artista.replace('</a>','')
            artista=artista.replace("/","-")    
            artista=artista.replace('"',"'")
            artista=artista.replace("'"," ")
            artista=artista.split(">")[1]
            artistas.append(artista)
    print ("(2) geting links")    

    for n in enderecos:
        link=str(n)
        if 'name="c' in link:
            continue
        elif 'value="0"' in link:
            continue
        elif 'value="2"' in link:
            continue
        else:
            links.append(link.split('"')[5])
    print ("(3) geting song names")
    for n in nomemusica:
        musica=str(n)
        if 'id="ac_title"' in musica:
            continue
        musica=musica.replace('<span class="title" id="','')
        musica=musica.replace('<span class="match">','')
        musica=musica.replace('</span>','')
        musica=musica.replace('</a>','')
        if 'return cancelEvent(event);">' in musica:
            musica=musica.split('>')[2]
        else:    
            musica=musica.split('>')[1]
        musica=musica.replace("/","-")    
        musica=musica.replace('"',"'")   
        musica=musica.replace(':',"_")
        musica=musica.replace('-',"_")
        musicas.append(musica)
        i=0
    print ("fazendo update")
    for p in musicas:
        h="music: %s artist: %s\r"%(musicas[i],artistas[i])
        sys.stderr.write('\x1b[2K\r')
        sys.stderr.flush()
        sys.stderr.write(h)
        sys.stderr.flush()
        sql_command = 'INSERT OR REPLACE INTO musica (genero, link, nome, artista) VALUES (%s,"%s","%s","%s")'%(gen,links[i],musicas[i],artistas[i])
        cursor.execute(sql_command)
        connection.commit()
        i=i+1 
    print ("")
    os.system('clear')


# delete 
cursor = connection.cursor()
sql_command = """
    CREATE TABLE if not exists musica ( 
    id INTEGER PRIMARY KEY AUTOINCREMENT, 
    genero VARCHAR(30), 
    link VARCHAR(30), 
    nome VARCHAR(30), 
    artista VARCHAR(30)
    );"""
cursor.execute(sql_command)

def buscaf(termos2,artista,porc="100%",g=0):
    links= []
    musicas= []
    artistas= []
    termos2=termos2.replace("'"," ")
    buscas=termos2.split(" ")
    with open("baixadas.txt", encoding='utf-8') as f:
        content = f.read()
    with open("songnotfound.txt", encoding='utf-8') as f:
        content2 =f.read()
    if (termos2 in content2):
        print (termos2)
        return 
    else:
        termos="nome LIKE '%%'"
        for n in buscas:
            termos=termos+" AND nome LIKE '%"+n+"%'"
        if artista is not None:
            termos=termos+" AND artista LIKE '%"+artista+"%'"
        sqlb="SELECT * FROM musica WHERE (%s)"%termos
        cursor.execute(sqlb)
        data=cursor.fetchall()
        global i
        if i==0:
            login()
            i=1
        if (args.force_update is True):
            busca(None,termos2,artista,porc)
        elif ((len(data)==0 )and (g!=1)): 
            print ("buscando")
            print (termos2)
            busca(None,termos2,artista,porc)
            buscaf(termos2,artista,None,1)
        elif ((len(data)==0 ) and (g==1)):
            print ("musica nao achada nos nossos bancos de dados, desculpe -.-")
            d = open('songnotfound.txt','a')
            d.write("musica:%s artista:%s\n"%(termos2,artista))
        else:
            os.system('clear')
            print (porc)
            print ("musica: %s artista:%s"%(termos2,artista))
            print (" um total de %s musicas encontradas \n listando a seguir:"% len(data))
            for p in data:
                links.append(p[2])
                musicas.append(p[3])
                artistas.append(p[4])
            k=0
            for p in musicas:
                print ("[%i] %s - %s"%(k+1,musicas[k],artistas[k]))
                k=k+1
            if args.number_downloads is not None:
                if args.number_downloads ==0:
                    a=["1,%s"%(len(musicas))]
                else:
                    a=["1,%s"%(args.number_downloads)]
            else:
                print ("quais deseja baixar, bote numero , para sequencial")
                if sys.version_info >= (3, 0):
                    voptn = input("insert the numbers: ")
                else:
                    voptn = raw_input("insert the numbers: ")
                a = voptn.split(" ")
            for p in a:
                if "," in p:
                    b=p.split(",",1)
                    first,last = int(b[0]),int(b[1])
                    for n in range(first,last+1):
                        print ("downloading")
                        print ("music: %s artist: %s"%(musicas[int(n)-1],artistas[int(n)-1]))
                        if (musicas[int(n)-1] in content):
                            print (musicas[int(n)-1])
                            return 
                        baixar(musicas[n-1]+"-"+artistas[n-1],links[n-1])            
                else:
                    for n in p:    
                        print ("downloading")
                        n=int(n)
                        print ("music: %s artist: %s"%(musicas[int(n)-1],artistas[int(n)-1]))
                        if (musicas[int(n)-1] in content):
                            print (musicas[int(n)-1])
                            return 
                        baixar(musicas[n-1]+"-"+artistas[n-1],links[n-1])
                        
            print ("all songs has been downloaded, have a nice day")
import array
def listaspotify(user, playlist):
    offset=0
    i=0
    parar=[1]
    while parar:    
        headers = {"Authorization":"Bearer "+refresh_token() ,"Accept": "application/json"}
        r = requests.get('https://api.spotify.com/v1/users/'+user+'/playlists/'+playlist+'/tracks?fields=items(track(name,artists,album(name)))&offset='+str(offset),headers=headers) 
        r=json.dumps(r.json())
        continuar=json.loads(r)
        parar=continuar["items"]
        for n in continuar["items"]:
            spotifymusica.append(re.sub('[0-2][0-9][0-9][0-9]','',str(n['track']['name']).replace('"',"'").replace("'"," ").replace("-","").replace("Version","").replace("Remastered","").replace("Stereo","")))
            spotifyartista.append(str(n['track']['artists'][0]['name']).replace('"',"'").replace("'"," "))
            spotifyalbum.append(str(n['track']['album']['name']).replace('"',"'").replace("'"," "))
        i=i+1
        offset=100*i
    
if args.spotify is not None:
    if "user:" in args.spotify:
        user=args.spotify.split(":")[2]
        playlist=args.spotify.split(":")[4]
    if "user/" in args.spotify:
        user=args.spotify.split("/")[4]
        playlist=args.spotify.split("/")[6]
    listaspotify(user,playlist)
    f=0
    b=0
    if (args.save_list is True):
        d = open('playlist'+datetime.datetime.strftime(datetime.datetime.now(), '%Y-%m-%d %H:%M:%S')+'.txt','w')
        for n in spotifymusica:
            d.write("musica:"+spotifymusica[int(b)]+" artista:"+spotifyartista[int(b)]+'\n')
            b=b+1
    if (args.force_update is True):
        print ("atualizando db")
        for n in spotifymusica:
            porc=(str(float(f)/float(len(spotifymusica))*100)+"%")
            buscaf(spotifymusica[int(f)-1],spotifyartista[int(f)-1],porc,0)
            f=f+1
    else:
        os.system('clear')
        print ("musicas na sua playlist")
        for n in spotifymusica:
            print ("[%i] musica:%s - artista:%s - album:%s"%(f+1,spotifymusica[f],spotifyartista[f],spotifyalbum[f])) 
            f=f+1
        t=0
        if args.number_downloads is not None:
            for n in spotifymusica:
                porc=(str(float(t)/float(len(spotifymusica))*100)+"%")
                buscaf(spotifymusica[int(t)],spotifyartista[int(t)],porc,0)   
                t=t+1
        else:
            print ("quais deseja baixar, bote numero , para sequencial")
            if sys.version_info >= (3, 0):
                voptn = input("insert the numbers: ")
            else:
                voptn = raw_input("insert the numbers: ")
            a = voptn.split(" ") 
        for p in a:
            if "," in p:
                b=p.split(",",1)
                first,last = int(b[0]),int(b[1])
                for n in range(first,last+1):
                    os.system('clear')
                    porc=(str(float(n)/float(last)*100)+"%")
                    buscaf(spotifymusica[int(n)-1],spotifyartista[int(n)-1],porc,0)
            else:
                for n in p:
                    os.system('clear')
                    porc=(str(float(n)/float(len(spotifymusica))*100)+"%")
                    buscaf(spotifymusica[int(n)-1],spotifyartista[int(n)-1],porc,0)
                        
if (args.search is not None ) or (args.list is not None ): 
    if args.list is 	not None:
        with open(args.list, encoding='utf-8') as f:
            content = f.read().splitlines()
        for m in content:
            print (m)
            musica=""
            artista=""
            if ("musica:") in m:
                musica=m.split("musica:")[1]
                if "artista:" in musica:
                    musica=musica.split("artista:")[0]
            if ("artista:") in m:
                artista=m.split("artista:")[1]
                if "musica:" in artista:
                    artista=artista.split("musica:")[0]
            buscaf(musica,artista,None,0)
    else:
        buscaf(args.search,args.artista,None,0)

if (args.search is None ) and (args.artista is not None):
        buscaf("",args.artista,None,0)    
    
if args.update is True:
    login()
    generos=[0,1,2,3,5,21,6,4,7,8,17,1001,10,11,13,14,15,16,22]    
    for ge in generos:
        busca(ge,None,None,None)

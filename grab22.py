from grab import Grab
import logging
from urllib import urlencode
from bs4 import BeautifulSoup
from transliterate import translit, get_available_language_codes

g = Grab()
g.go('http://vk.com/search')
g.doc.set_input('email', 'linuxopenmusic@gmail.com')
g.doc.set_input('pass', 'linuxopenmusic')
g.doc.submit()
g.go('http://vk.com/audios328513317')
soup = BeautifulSoup(g.response.body,"lxml")
enderecos=soup.findAll("input",{'type':'hidden'})
nomemusica=soup.findAll("span",{'class':'title'})
ge="0"
qs = urlencode({'act': 'popular', 'genre': ge})
g.go('http://vk.com/audios328513317?%s' % qs)
print "now saving informarion for the downloads, this will be slow"
links = []
musicas = []
artistas = []
soup = BeautifulSoup(g.response.body,"lxml")
enderecos=soup.findAll("input",{'type':'hidden'})
nomemusica=soup.findAll("span",{'class':'title'})
nomeartista=soup.findAll("a")

print "(2) geting links"	
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
print "(3) geting song names"
for n in nomemusica:
	musica=translit(n, 'ru', reversed=True)
	musica=musica.encode("utf8","replace")
	musica=musica.decode("ascii",'ignore')
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
	musicas.append(musica)

i=0
for n in nomeartista:
	artista=str(n)
	if "event: event, name:" in artista:
		print n
		artista=artista.decode("ascii",'ignore')
		artista=artista.split('>')[1]
		artista=artista.split('<')[0]
		artistas.append(artista)
print "fazendo update"
for p in musicas:
	print "music: %s artist: %s"%(musicas[i],artistas[i])
	i=i+1
#g.go('https://login.vk.com/?act=login', post=[('email', 'linuxopenmusic@gmail.com'), ('pass', 'linuxopenmusic')])
#qs = urlencode({'foo': 'bar', 'arg': 'val'})
#g.go('http://dumpz.org/?%s' % qs)
#g.go(quote(url.encode('utf-8')))

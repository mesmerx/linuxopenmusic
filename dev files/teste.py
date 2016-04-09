
import sys, getopt
import mechanize
import cookielib
import re
import argparse
from bs4 import BeautifulSoup
br = mechanize.Browser()
cj = cookielib.LWPCookieJar()
br.set_cookiejar(cj)
br.set_handle_refresh(mechanize._http.HTTPRefreshProcessor(), max_time=1)
br.set_handle_equiv(True)
br.set_handle_redirect(True)
br.set_handle_referer(True)
br.set_handle_robots(False)
parser = argparse.ArgumentParser(description='This is a demo script by nixCraft.')
parser.add_argument('-s','--search', help='Input search name')
parser.add_argument('-p','--popular',help='Search in popular category', type=int, choices=[0,1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
args = parser.parse_args()
url= "http://vk.com/search?"

if (args.search is None) and (args.popular is None):
	print "press the option you wanna"
	print "(1) for popular releases"
	print "(2) for search something"
	vopt = int(raw_input("insert the number: "))
	if (vopt==1):
		args.popular=1
	elif (vopt==2):
		print "you will search some music :)"
		vopt2 = raw_input("what you wanna search?: ")	
		args.search=vopt2

if (args.popular) and (args.popular):
	print "can't use --popular and --search same time, using --popular like default"
if args.popular is not None:
	args.search=None
if args.popular is not None:
	url= "http://vk.com/audios328513317?"
	url=url+"act=popular"
	if (args.popular==0):
		url=url+"&genre=0"
	elif (args.popular==1):
		url=url+"&genre=1"
	elif (args.popular==2):
		url=url+"&genre=2"
	elif (args.popular==3):
		url=url+"&genre=3"
	elif (args.popular==4):
		url=url+"&genre=5"
	elif (args.popular==5):
		url=url+"&genre=21"
	elif (args.popular==6):
		url=url+"&genre=6"
	elif (args.popular==7):
		url=url+"&genre=4"
	elif (args.popular==8):
		url=url+"&genre=7"
	elif (args.popular==9):
		url=url+"&genre=8"
	elif (args.popular==10):
		url=url+"&genre=17"
	elif (args.popular==11):
		url=url+"&genre=1001"
	elif (args.popular==12):
		url=url+"&genre=10"
	elif (args.popular==13):
		url=url+"&genre=11"
	elif (args.popular==14):
		url=url+"&genre=13"
	elif (args.popular==15):
		url=url+"&genre=14"
	elif (args.popular==16):
		url=url+"&genre=15"
	elif (args.popular==17):
		url=url+"&genre=16"
	elif (args.popular==18):
		url=url+"&genre=22"
if args.search:
	a=re.sub(' ','+',args.search,5)
	url=url+"c[q]="+a+"&c[section]=audio"
     	print a+" "+url
br.addheaders = [('User-agent', 'Mozilla/5.0 (X11; U; Linux i686; en-US; rv:1.9.0.1) Gecko/2008071615 Fedora/3.0.1-1.fc9 Firefox/3.0.1')]
br.open('http://vk.com/search')
br.select_form(nr = 0)
br.form['email'] = 'mesmer@fisica.if.uff.br'
br.form['pass'] = 'senha222'
br.submit()
print url
br.open(url)
links = []
musicas = []
artistas = []
g = br.response().read().splitlines()
h=br.open(url).read()
soup = BeautifulSoup(h)
verificar=soup.findAll("input")
if "audios" in url:
	for line in  g:
		i=0
		if "audio_info" in line:
        		link=line.split("=")[3]+line.split("=")[4];
	        	link=re.sub('"','',link,2)
	        	link=re.sub(' />','',link,2)
	        	if "removeClass(this, 'over')" in line:
	        		continue
	    		else:
	        		links.append(link)
		if 'onclick="Audio.showLyrics(' in line:
	        	musica=line.split('(event);">')[1]
	        	musica=musica.split("</a>")[0]
	        	if '<span class="match">' in musica:
	        		continue
	    		else:
	        		musicas.append(musica)
else:
	for line in  g:
		i=0
		if "audio_info" in line:
        		link=line.split("=")[3]+line.split("=")[4];
	        	link=re.sub('"','',link,2)
	        	link=re.sub(' />','',link,2)
	        	if "removeClass(this, 'over')" in line:
	        		continue
	    		else:
	        		links.append(link)
for m in br.links():
		print m.text
for n in verificar:
		print link
	
        	


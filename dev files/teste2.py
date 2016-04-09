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
install_and_import('transliterate')
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
from humanize import naturalsize
from transliterate import translit, get_available_language_codes
from grab import Grab
from urllib import urlencode
from bs4 import BeautifulSoup

from pprint import pprint
	
#variaveis globais#

parser = argparse.ArgumentParser(description='This is a demo script by nixCraft.')
parser.add_argument('-s','--search', help='Input search name')
parser.add_argument('-p','--popular',help='Search in popular category', type=int, choices=[0,1, 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16])
parser.add_argument('-n','--number-downloads',help='Search in popular category', type=int)
parser.add_argument('-u','--update',help='update', action='store_true')
parser.add_argument('-f','--force-update',help='update', action='store_true')
parser.add_argument('-l','--list',help='update')
args = parser.parse_args()
connection = sqlite3.connect("database.db")
g = Grab()
links = []
musicas = []
artistas = []
START_TIME = None
i=0
import base64
import requests
import os
import json
import time
import sys

def refresh_token():
	payload = { 'grant_type': 'client_credentials'}
	auth_header = base64.b64encode('4500f787bd384d31884b433219e1459e:d4b91f14f10e442abdbbbb658ceb8546')
	headers = {'Authorization': 'Basic %s' % auth_header}
	response = requests.post('https://accounts.spotify.com/api/token', data=payload, headers=headers, verify=True)
	if response.status_code is not 200:
		raise SpotifyOauthError(response.reason)
	token = response.json()
	return token['access_token'] 
headers = {"Authorization":"Bearer "+refresh_token() ,"Accept": "application/json"}
r = requests.get('https://api.spotify.com/v1/users/12156999741/playlists/0ZdLuqMQao0ittGeMmZq8X/tracks',headers=headers)

data= r.content
pprint (json.loads(data)['items'])
for n in json.loads(data)['items']: 
	print n['track']['name'].encode('utf8')
	print n['track']['album']['name'].encode('utf8')
		

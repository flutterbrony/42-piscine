#!/bin/sh
ldapwhoami -Q | sed -e 's/dn://g' | sed -e 's/ou=2017_paris,//g' | sed -e 's/ou=paris,//g'

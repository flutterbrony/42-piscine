#!/bin/sh
ifconfig | grep -e ether |  rev | cut -d 'r' -f1 | rev | sed 's/ //g'

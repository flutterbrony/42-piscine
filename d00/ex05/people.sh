#!/bin/sh
ldapsearch -Q -LLL 'uid=z*' | sed -n '/cn:/p ' | sort -r -f | sed -e 's/cn: //g'

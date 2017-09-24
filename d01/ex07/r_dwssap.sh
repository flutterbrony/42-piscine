#!/bin/sh
cat -e /etc/passwd | grep -E -v '^(#)' | sed -n 'n;p' | cut -d':' -f1 | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' | tr '\n' ' ' | sed -e 's/ /, /g' | sed 's/[,]$/\./' |  tr -d '\n'

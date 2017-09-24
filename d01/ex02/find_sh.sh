#!/bin/sh
find . \( -name '*.sh' \) -print | rev |cut -d '/' -f1 |cut -c4- |rev

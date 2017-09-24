#!/bin/sh
find . -name \* | wc -l | sed 's/ //g'

#!/bin/sh
ldapsearch -Q '(sn=*bon*)' | grep sn: -c

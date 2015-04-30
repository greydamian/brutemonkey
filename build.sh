#! /usr/bin/env bash

# Copyright (c) 2015 Damian Jason Lapidge
#
# The contents of this file are subject to the terms and conditions defined 
# within the file LICENSE.txt, located within this project's root directory.

CC="cc";
CFLAGS="";
LDFLAGS="";
LDLIBS="";

SRC="./src/wordspace.c ./src/brutemonkey.c";
OUT="./bin/brutemonkey";

# create output directory
mkdir -p ./bin;

if [ "$(which $CC)" == "" ];
then
    echo "error: failure to locate C compiler ($CC)" 1>&2;
    exit 1; # exit failure
fi

# compile/link source code
$CC $CFLAGS $SRC $LDFLAGS $LDLIBS -o $OUT;


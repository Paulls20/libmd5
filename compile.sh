#!/bin/sh
gcc -c md5.cpp -I. -std=c++11 -lstdc++
ar rsv libmd5.a md5.o
rm -f md5.o > /dev/null

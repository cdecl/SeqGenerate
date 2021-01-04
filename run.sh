#!/bin/bash


rm -f *.txt

sleep 1
c++/main

sleep 1
dotnet dotnetcore/bin/Release/net5.0/dotnetcore.dll

sleep 1
golang/bin/main.exe

sleep 1
java -cp java Main

# python python/main.py


wc -l *.txt




#!/bin/bash

PROJECT_NAME="explorer-sfml"

g++ -c src/Main.cpp
g++ *.o -o build/$PROJECT_NAME
rm -rf *.o

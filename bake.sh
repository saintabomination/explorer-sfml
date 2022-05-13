#!/bin/bash

PROJECT_NAME="explorer-sfml"
LIBRARIES="-lsfml-graphics -lsfml-window -lsfml-system"

g++ -c src/Main.cpp src/Classes/*.cpp
mkdir -p build
g++ *.o -o build/$PROJECT_NAME -I src/Headers $LIBRARIES
rm -rf *.o

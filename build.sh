#!/bin/bash

echo "=== PuggyK.O Builder ==="

make clean
make

mkdir -p output

cp PuggyKO.3dsx output/

echo "Build concluído!"

#!/bin/bash

cd "E:/projects/c++ course/ELzero course c++ level one" || exit

git pull origin master

git add -u
git add .

git commit -m "Auto commit: $(date '+%Y-%m-%d %H:%M:%S')" --quiet

git push origin master --quiet

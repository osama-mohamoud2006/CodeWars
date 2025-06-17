#!/bin/bash

# Move to the repo directory
cd "E:/projects/c++ course/ELzero course c++ level one" || exit

# Update the repo
git pull origin main

# Add all changes, but respect .gitignore automatically
git add -u   # add updated and deleted files
git add .    # add new files except ignored by .gitignore

# Commit with date and time automatically
git commit -m "Auto commit: $(date '+%Y-%m-%d %H:%M:%S')" --quiet

# Push changes to remote
git push origin main --quiet

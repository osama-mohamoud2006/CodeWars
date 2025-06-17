#!/bin/bash

# المجلد الأساسي للمشروع
project_dir="E:/projects/c++ course/ELzero course c++ level one"
cd "$project_dir" || exit

# سحب آخر التعديلات من Git
git pull origin main

# حفظ نسخة من المشروع في فولدر باسم تاريخ الإنشاء (أول مرة بس)
snapshot_dir="E:/projects/_snapshots"
mkdir -p "$snapshot_dir"

# أول مرة فقط نحفظ نسخة بتاريخ اليوم لو مش موجود فولدر بتاريخ النهاردة
today=$(date '+%Y-%m-%d')
snapshot_path="$snapshot_dir/$today"

if [ ! -d "$snapshot_path" ]; then
  cp -r "$project_dir" "$snapshot_path"
  echo "📁 Snapshot created at: $snapshot_path"
fi

# Git commands
git add -u
git add .

commit_msg="Auto commit: $(date '+%Y-%m-%d %H:%M:%S')"
git commit -m "$commit_msg" --quiet

git push origin main --quiet


~/Desktop/Новая папка
$ git clone https://github.com/gkju-hoi/my-first-project.git
Cloning into 'my-first-project'...
remote: Enumerating objects: 3, done.
remote: Counting objects: 100% (3/3), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 0), reused 3 (delta 0), pack-reused 0 (from 0)
Receiving objects: 100% (3/3), done.

~/Desktop/Новая папка
$ cd my-first-project

 ~/Desktop/Новая папка/my-first-project (main)
$ git add todo.cpp
git commit -m "feat: add basic todo list with show functionality"
git push origin main
On branch main
Your branch is up to date with 'origin/main'.

nothing to commit, working tree clean
Everything up-to-date

 ~/Desktop/Новая папка/my-first-project (main)
$ git log
commit b4b935e63917df42e2f63b93406e9a72cb2e4e80 (HEAD -> main, origin/main, orig
in/HEAD)
Author: Pavel Chuykov <p-chuykov@bk.ru>
Date:   Fri Oct 3 20:14:10 2025 +0300

    Добавить базовую структуру проекта

~/Desktop/Новая папка/my-first-project (main)
$ git add todo.cpp
git commit -m "feat: add task removal functionality"
git push origin main
[main 2eeb904] feat: add task removal functionality
 1 file changed, 9 insertions(+), 9 deletions(-)
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 4 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 403 bytes | 201.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: This repository moved. Please use the new location:
remote:   https://github.com/Gkju-hoi/my-first-project.git
To https://github.com/gkju-hoi/my-first-project.git
   b4b935e..2eeb904  main -> main

~/Desktop/Новая папка/my-first-project (main)
$ # Добавляем функцию addTask() в код
git add todo.cpp
git commit -m "feat: add task addition functionality"
git push origin main
[main 3936097] feat: add task addition functionality
 1 file changed, 24 insertions(+)
Enumerating objects: 5, done.
Counting objects: 100% (5/5), done.
Delta compression using up to 4 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 517 bytes | 517.00 KiB/s, done.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote: This repository moved. Please use the new location:
remote:   https://github.com/Gkju-hoi/my-first-project.git
To https://github.com/gkju-hoi/my-first-project.git
   2eeb904..3936097  main -> main

~/Desktop/Новая папка/my-first-project (main)
$

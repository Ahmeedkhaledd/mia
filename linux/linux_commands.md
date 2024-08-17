# Linux Commands

ahmed@DESKTOP-UTB7RO1:~$ pwd
/home/ahmed
ahmed@DESKTOP-UTB7RO1:~$ ls
mia  try
ahmed@DESKTOP-UTB7RO1:~$ mkdir linux
ahmed@DESKTOP-UTB7RO1:~$ ls
linux  mia  try
ahmed@DESKTOP-UTB7RO1:~$ cd linux
ahmed@DESKTOP-UTB7RO1:~/linux$ rm try
rm: cannot remove 'try': No such file or directory
ahmed@DESKTOP-UTB7RO1:~/linux$ rm -r try
rm: cannot remove 'try': No such file or directory
ahmed@DESKTOP-UTB7RO1:~/linux$ cd //
ahmed@DESKTOP-UTB7RO1://$ ls
bin  boot  dev  etc  home  init  lib  lib32  lib64  libx32  lost+found  media  mnt  opt  proc  root  run  sbin  snap  srv  sys  tmp  usr  var
ahmed@DESKTOP-UTB7RO1://$ cd ahmed
-bash: cd: ahmed: No such file or directory
ahmed@DESKTOP-UTB7RO1://$ pwd
//
ahmed@DESKTOP-UTB7RO1://$ cd ~
ahmed@DESKTOP-UTB7RO1:~$ pwd
/home/ahmed
ahmed@DESKTOP-UTB7RO1:~$ la
.bash_history  .bash_logout  .bashrc  .cache  .config  .local  .motd_shown  .profile  linux  mia  try
ahmed@DESKTOP-UTB7RO1:~$ ls
linux  mia  try
ahmed@DESKTOP-UTB7RO1:~$ rm -r try
ahmed@DESKTOP-UTB7RO1:~$ ls
linux  mia
ahmed@DESKTOP-UTB7RO1:~$ cd mia
ahmed@DESKTOP-UTB7RO1:~/mia$ ls
file.txt  folder1  folder2  hello.sh  hi.txt
ahmed@DESKTOP-UTB7RO1:~/mia$ cd hi.txt
-bash: cd: hi.txt: Not a directory
ahmed@DESKTOP-UTB7RO1:~/mia$ cd /
ahmed@DESKTOP-UTB7RO1:/$ ls
bin  boot  dev  etc  home  init  lib  lib32  lib64  libx32  lost+found  media  mnt  opt  proc  root  run  sbin  snap  srv  sys  tmp  usr  var
ahmed@DESKTOP-UTB7RO1:/$ cd ~
ahmed@DESKTOP-UTB7RO1:~$ cd mia
ahmed@DESKTOP-UTB7RO1:~/mia$ cd ..
ahmed@DESKTOP-UTB7RO1:~$ ls
linux  mia
ahmed@DESKTOP-UTB7RO1:~$ cp hi.txt linux
cp: cannot stat 'hi.txt': No such file or directory
ahmed@DESKTOP-UTB7RO1:~$ ls
linux  mia
ahmed@DESKTOP-UTB7RO1:~$ cp mia/hi.txt linux
ahmed@DESKTOP-UTB7RO1:~$ ls
linux  mia
ahmed@DESKTOP-UTB7RO1:~$ cd linux
ahmed@DESKTOP-UTB7RO1:~/linux$ ls
hi.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ touch try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ ls
hi.txt  try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ nano try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ nano linux_commands.md
ahmed@DESKTOP-UTB7RO1:~/linux$ ls
hi.txt  try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ mkdir linux_commands.md
ahmed@DESKTOP-UTB7RO1:~/linux$ ls
hi.txt  linux_commands.md  try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ rm -r linux_commands.md
ahmed@DESKTOP-UTB7RO1:~/linux$ ls
hi.txt  try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ touch linux_commands.md
ahmed@DESKTOP-UTB7RO1:~/linux$ ls
hi.txt  linux_commands.md  try.txt
ahmed@DESKTOP-UTB7RO1:~/linux$ nano linux_commands.md
ahmed@DESKTOP-UTB7RO1:~/linux$


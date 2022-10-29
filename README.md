# Sandgame
Making a basic falling sand simulator and seeing if I can do some fun stuff with that, inspired by Noita

1. install docker and vscode (possibly also need wsl, return to this step if necessary)
2. download image (in cmd: "docker pull accetto/ubuntu-vnc-xfce-opengl-g3")
3. ctrl + shift + p in vscode: "open container" (I think, may be wrong name)
4. in terminal: "sudo apt install -y git" (pass: headless)
5. in terminal: "mkdir dev"
6. in terminal: "cd dev"
7. in terminal: "git config --global user.name first_name last_name"
8. in terminal: "git config --global user.email your_email@email_host.com"
9. in terminal: "sudo apt install build-essential"
10. in terminal: "g++ --version"
11. install extensions into container: c/c++, c/c++ extension pack, cmake, cmaketools, docker
12. in terminal: "sudo apt install gdb"
13. install Windows X server from "https://sourceforge.net/projects/vcxsrv/"
14. run xlaunch, select multiple windows, start no client, clipboard, primary selection, native opengl, disable access control
15. in terminal: "export DISPLAY=0:0"

OPEN GL WORKS!
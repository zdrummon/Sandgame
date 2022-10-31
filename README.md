# Sandgame
Making a basic falling sand simulator and seeing where that leads us \
(inspired by Noita)
---
Contributors: \
zdrummon@gmail.com  \
cesismalon@gmail.com
---
### Instructions:
1. Install VSCode from "https://code.visualstudio.com/"
2. Install Docker Desktop from "https://www.docker.com/products/docker-desktop/"
3. Install Windows X Server from "https://sourceforge.net/projects/vcxsrv/"
4. Setup WSL2 \
        (this step needs to be expanded upon)
5. In powershell (admin): "docker pull zdrummon/ubuntu_opengl"
6. Run image from within Docker Desktop (pass: headless)
7. Click on the Extensions tab on the left and search for "Docker" then install
8. Click on the Remote Explorer tab on the left in VSCode and click "attach to container" on "zdrummon/ubuntu_opengl"
9. Click on the Explorer tab on the left and click "open folder" and then navigate to "/dev/sandgame/"
10. In VSCode terminal: "git config --global user.name first_name last_name"
11. In VSCode terminal: "git config --global user.email your_email@email_host"
12. Other git steps (this step needs to be expanded upon) \
        (this step needs to be expanded upon)
12. In VSCode terminal: "export DISPLAY=0:0"
13. Run xlaunch from the Windows start menu and select these options:\
        multiple windows, start no client, clipboard, primary selection, native opengl, disable access control
14. Compile and run!
---
### To-do:
1. Update my image on Docker Hub with more secure git configuration


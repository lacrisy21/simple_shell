<p align="center">
  <img src="https://github.com/lacrisy21/README-stuff/blob/main/shell_logo.png" width="360"/>
 <h1 align="center">Simple Shell created from scratch</h1>
 <br>
 </p>
</p>

Creation of a simple shell using C programming language, implementing peer programming and SCRUM framework. 

---
### - Files in the Repository 🖇️

#|Directory|Description
---|---|---
1|[README.md](./README.md)| You are reading it
2|[man_1_simple_shell](./man_1_simple_shell)| Manual of the Shell
3|[AUTHORS](./AUTHORS)| Lists all individuals who contributed content to the repository
2|[elysium.h](./elysium.h)| Header containing the function prtotypes
2|[eurydice.c](./eurydice.c)| Functions and system calls for the shell
2|[hypnos.c](./hypnos.c)| Executions for the shell
2|[thanatos.c](./thanatos.c)| Simple Shell

## Description 🚀

- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / “end-of-file”?

### - Allowed functions and system calls

|Functions and system calls
---|---|---
- access 
- chdir 
- close 
- closedir
- execve
- exit 
- _exit 
- fflush 
- fork 
- free 
- getcwd
- getline 
- isatty 
- kill 
- malloc 
- open 
- opendir 
- perror 
- read 
- readdir 
- signal 
- stat (__xstat) 
- lstat (__lxstat) 
- fstat (__fxstat) 
- strtok 
- wait 
- waitpid
- wait3 
- wait4 
- write 

## Deployment ⚙️

#### Requirements
 - Gcc >= 4.8.4

#### Steps to compile the shell and execute.
 - `git clone https://github.com/lacrisy21/simple_shell.git`
 - `cd simple_shell`
 - `gcc -Wall -Werror -Wextra -pedantic *.c -o thanatos`
 - `./thanatos`
 
 #### Add examples

```
$./thanatos
```
simple_shell]$ ls
```
AUTHORS    eurydice.c   hypnos.c            README.md
elysium.h  executables  man_1_simple_shell  thanatos.c
```

$./thanatos
```
simple_shell]\$ echo $PATH
```
/home/vagrant/.vscode-server/bin/e5a624b788d92b8d34d1392e4c4d9789406efe8f/bin:/home/vagrant/.vscode-server/bin/e5a624b788d92b8d34d1392e4c4d9789406efe8f/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games
```
---

### Flowchart 🔩
<p align="center">
  <img src="https://github.com/lacrisy21/README-stuff/blob/main/Flowchart_Simple_shell.jpg" width="800"/>
 <h1 align="center">Simple Shell</h1>
 <br>
 </p>
</p>

## Built with 🛠️
 - C programming Language
 - Visual Studio Code
 - For Holberton Schoool, Cohort 13

## Autors ✒️

Check who contributed to this project [here](./AUTHORS)
😊

## Check our blog
 <a href="https://www.linkedin.com/pulse/what-happens-when-you-type-ls-l-shell-laura-cristina-gil-posada/" target="_blank"> What happens when you type ls -l in the shell
</a>
---
<p align="center">
  <h2 align="center">Made by:</h2>
    <h3 align="center">Laura Cristina Gil</h3>
      <p align="center">
        <a href="https://twitter.com/Laa_Titina" target="_blank">
            <img alt="twitter_page" src="https://github.com/lacrisy21/README-stuff/blob/main/twitter.png" style="float: center; margin-right: 10px" height="30" width="30">
        </a>
        <a href="https://www.linkedin.com/in/lcristinagil/" target="_blank">
            <img alt="linkedin_page" src="https://github.com/lacrisy21/README-stuff/blob/main/LinkedIn.png" style="float: center; margin-right: 10px" height="30"  width="30">
        </a>
      </p>
</p>
<p align="center">
    <h3 align="center">Kaky Rodriguez</h3>
      <p align="center">
        <a href="https://twitter.com/KakyRP" target="_blank">
            <img alt="twitter_page" src="https://github.com/lacrisy21/README-stuff/blob/main/twitter.png" style="float: center; margin-right: 10px" height="30" width="30">
        </a>
          <a href="https://www.linkedin.com/in/kakyrodriguezp/" target="_blank">
            <img alt="linkedin_page" src="https://github.com/lacrisy21/README-stuff/blob/main/LinkedIn.png" style="float: center; margin-right: 10px" height="30"  width="30">
        </a>
      </p>
</p>

<p align="center">
   <img src="https://www.holbertonschool.com/holberton-logo.png"
     alt="end"
     style="float: left; margin-right: 10px;">
</p>
<p align="center">
<b>Holberton School - Medellin, Colombia<b><br>
</p>
<p align="center">
<b>November, 2020 🍁 <b>
</p>
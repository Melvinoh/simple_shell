# ALX School Project: simple_shell
## Table of Contents
* [Description](#description)
* [Requirements](#requirements)
* [Installation](#installation)
* [Usage](#usage)
* [Authors](#authors)

## Description
Simple_shell is a command line interpreter, or shell, made by us in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is
intentionally minimalistic, was made in order to practice the basics of C learning, yet includes the basic functionality of a traditional Unix-like command line user interface.
Standard functions and system calls employed in simple_shell include:
	 `access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`

## Requirements:wq:
simple_shell is designed to run in the Ubuntu linux environment and to be compiled using the GNU compiler collection v. `gcc 4.8.4` with flags`-Wall, -Werror, -Wextra, and -pedantic.`

## Installation

	 - Clone this repository: `https://github.com/issar13/simple_shell`.
	 - Change directories into the repository: `cd simple_shell`
	 - Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
	 - Run the shell in interactive mode: `./hsh`
	 - Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`

## Usage

The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):

### Features
- [x] uses the PATH
- [x] implements builtins
- [x] handles command line arguments
- [x] custom strtok function
- [x] uses exit status
- [x] shell continues upon Crtl+C (**^C**)
- [x] handles comments (#)
- [x] handles **;**
- [ ] custom getline type function
- [ ] handles **&&** and **||**
- [ ] aliases
- [ ] variable replacement


### Builtins

- [x] exit
- [x] env
- [x] setenv
- [x] unsetenv
- [x] cd
- [x] help
- [x] history

## Authors
MUTURI MELVIN | [GitHub](https://github.com/Melvinoh)

## License
simple_shell is open source and therefore free to download and use without permission.

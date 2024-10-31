# A SMALL SHELL PROGRAM 
Nutshell is a c program where we can execute commands.

## initial structure of project
>> Main Shell loop => main.c
>> Command handling function => commands.c
>> Header file for commands => commands.h
>> Makefile for building the project

## feautures to code...

- **src/main.c**: This file contains the main shell loop, which includes:
  - Reading user input.
  - Parsing commands.
  - Calling appropriate functions to execute commands.

- **src/commands.c**: This file defines the functions that handle specific commands such as:
  - `ls` for listing directory contents.
  - `cd` for changing directories.
  - Any additional custom commands your shell will support.

- **include/commands.h**: The header file that declares functions for command handling. This ensures modularity and makes the functions in `commands.c` accessible to `main.c`.

- **Makefile**: A file that provides build instructions, allowing you to compile the project with a simple `make` command. It defines how to compile each `.c` file and link them into the final executable, as well as a `clean` target to remove build files.



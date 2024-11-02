#ifndef COMMANDS_H
#define COMMANDS_H

#define MAX_INPUT 1024   // Define MAX_INPUT here for use across files

// Declare functions for handling commands
void execute_command(char *input);
void fork_and_execute(char *args[]);

#endif

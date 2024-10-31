#include <stdio.h>     // Standard input/output library
#include <stdlib.h>    // Standard library for functions like malloc, free, exit
#include <string.h>    // String manipulation functions like strtok
#include <unistd.h>    // POSIX operating system API for functions like fork, exec, chdir

#define MAX_INPUT 1024  // Maximum input length

void execute_command(char *input) {
    if(strcmp(input,"hello") == 0){
        printf("Hello\n");
    }else
    {
        printf("I don't programmed for it\n");
    }
    
}  // Temporary empty function it will change when commands.c programs 

int main() {
    char input[MAX_INPUT];   // Array to store user input

    while (1) {   // Infinite loop to keep the shell running
        printf("NUTSHELL >> ");   // Prompt for user
        if (fgets(input, MAX_INPUT, stdin) == NULL) {  // Read user input
            break;   // Exit if end-of-file (Ctrl+D)
        }

        // Remove newline character from input
        input[strcspn(input, "\n")] = 0;

        // Check for built-in commands (like 'exit')
        if (strcmp(input, "exit") == 0) {
            break;   // Exit the shell if 'exit' command is entered
        }

        // Call command handling function (to be implemented in commands.c)
        execute_command(input);
    }

    return 0;  // Exit program
}

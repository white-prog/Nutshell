#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "commands.h"  // Link to header for function declarations
#include <sys/types.h>




void execute_command(char *input) {
    // Parse the input command and its arguments
    char *args[MAX_INPUT];
    char *token = strtok(input, " ");  // Tokenize input by spaces
    int i = 0;

    while (token != NULL) {
        args[i++] = token;   // Store each token (command and arguments)
        token = strtok(NULL, " ");
    }
    args[i] = NULL;  // Null-terminate the argument list

    // Built-in command handling: change directory
    if (strcmp(args[0], "cd") == 0) {
        if (args[1] == NULL) {
            fprintf(stderr, "Expected argument to \"cd\"\n");
        } else {
            if (chdir(args[1]) != 0) {  // Attempt to change directory
                perror("cd error");  // Display error if it fails
            }
        }
    } else {
        printf("hello\n");  // For other commands, call the execution function
    }
}

//void fork_and_execute(char *args[]) {
    //pid_t pid = fork();  // Create a new process

    //if (pid == 0) {
        // Child process: attempt to execute the command
        //if (execvp(args[0], args) == -1) {
            //perror("exec failed");  // Show error if exec fails
        //}
       // exit(EXIT_FAILURE);  // Exit child if exec fails
    //} else if (pid < 0) {
      //  perror("fork failed");  // Error handling if fork fails
    //} else {
       // wait(NULL);  // Parent process waits for the child to finish
    //}
//}
//still 
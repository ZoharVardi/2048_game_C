
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include "game.h"
#define VALID_OPTIONS "nrlude"

char valid_input()
{
    char* user_input = (char*)malloc(100 * sizeof(char));
    if (user_input == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    while (1) { 

        if (fgets(user_input, 100, stdin)
            && strlen(user_input) == 2 && *(user_input + 1) == '\n') {

            char ch = *user_input;

            if (valid_option(ch)) {
                free(user_input); 
                return ch; 
            }

            printf("Invalid input. Please enter a valid option.\n");
        }
        else {
            printf("Invalid input. Please enter a single character.\n");
        }
    }

    free(user_input);
}




int valid_option(char ch)
{
    ch = tolower(ch);

    const char* ptr = VALID_OPTIONS;
    while (*ptr != '\0') {
        if (ch == *ptr) {
            return 1;
        }
        ptr++;
    }

    return 0;
}







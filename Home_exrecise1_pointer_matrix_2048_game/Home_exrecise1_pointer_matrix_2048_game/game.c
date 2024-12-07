
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include "game.h"
#include "output.h"
#include "input.h"
#include "game_functions.h"
#define CELL_SIZE 5


void playGame(int* board, int size, int scoreToWin)
{
    char user_input =' ';
    int game_active = 0, max_score = 0, current_score = 0;
    int border_length = size * (CELL_SIZE + 1) + 1;
    char* border = malloc(border_length + 1);
    char* empty_cell = malloc(CELL_SIZE + 1);

    if (border == NULL || empty_cell == NULL) {
        printf("Memory allocation failed\n");

        if (border) free(border);
        if (empty_cell) free(empty_cell);

        return;
    }

    init_graphics((char*)border, (char*)empty_cell, border_length, CELL_SIZE);
    display_board((int*)board, (char*)border, (char*)empty_cell, size, CELL_SIZE);
    display_manu();

    while (1)//cheak lose, cheak win
    {
            user_input = valid_input();

            if (user_input == 'n')
            {
                game_active = 1;
            }
            if (game_started(user_input, game_active))
            {
                 switch (user_input) {
                                case 'n':
                                    printf("New Game selected.\n");
                                    start_game((int*)board, size, scoreToWin);
                                    break;
                                    
                                case 'r':
                                    printf("Move Right selected.\n");
                                    break;
                                    
                                case 'l':
                                    printf("Move Left selected.\n");
                                    break;
                                case 'u':
                                    printf("Move Up selected.\n");
                                    break;
                                case 'd':
                                    printf("Move Down selected.\n");
                                    break;
                                case 'e':
                                    printf("Exit selected.\n");
                                    game_active = 0;
                                    break;
                                default:
                                    break;
                 }

            } 

    }

free(empty_cell);
free(border);
}



#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include "game.h"

void init_graphics(char* border, char* empty_cell, int border_length, int cell_size)
{

	for (int i = 0; i < border_length; i++) {
		*(border + i) = '-';
	}
	*(border + border_length) = '\0';

	for (int i = 0; i < cell_size; i++) {
		*(empty_cell + i) = ' ';
	}
	*(empty_cell + cell_size) = '\0';


	return;

}

void display_board(int* board, char* border, char* empty_cell, int size, int cell_size)
{

	for (int i = 0; i < size;i++)
	{
		printf("%s\n", border);
		for (int j = 0; j <= size; j++)
		{
			printf("|");
			if (*(board + i * size + j) == 0) {
				printf("%s", empty_cell);
			}
			else {
				printf("%*d ", cell_size - 1, *(board + i * size + j));
			}
		}
		printf("\n");
	}
	printf("%s\n\n", border);
}

	void display_manu()
	{
		printf("Please choose one of the following options:\n");
		printf("N/n - New Game\n");
		printf("R/r - Move Right\n");
		printf("L/l - Move Left\n");
		printf("U/u - Move Up\n");
		printf("D/d - Move Down\n");
		printf("E/e - Exit\n");

	}



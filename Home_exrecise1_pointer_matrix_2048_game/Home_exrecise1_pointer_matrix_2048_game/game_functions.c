#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#define TWO_CHANCE 0.7
#define FOUR_CHANCE 0.3

int game_started(char user_input, int game_started)
{

    if (((user_input == 'r' || user_input == 'l' || user_input == 'u' || user_input == 'd'))
        && (!game_started))
    {
        printf("need to start game first\n");
        return 0;
    }
    return 1;
}

void start_game(int* board, int size, int scoreToWin)
{




}

int generate_random_2_or_4()
{
    float random_value = (float)rand() / RAND_MAX;

    if (random_value < TWO_CHANCE) {
        return 2; 
    }
    else {
        return 4; 
    }

}

int* generate_random_pointer(int* board, int size)
{
    //while !found
    //generate row
    // genrate col






}
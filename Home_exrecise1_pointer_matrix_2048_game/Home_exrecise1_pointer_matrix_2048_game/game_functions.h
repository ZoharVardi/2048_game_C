#ifndef __GAME_FUNCTIONS__
#define __GAME_FUNCTIONS__


int game_started(char user_input, int game_started);
void start_game(int* board, int size, int scoreToWin);
int generate_random_2_or_4();
int* generate_random_pointer(int* board, int size);
#endif
#include <stdlib.h>
#include <stdio.h>
#include "k.h"
int main()
{
    // wrong call

    // result = false
    // move right
    struct game game = {
        .board = {
            {' ', ' ', ' ', ' '},
            {'A', 'D', 'A', ' '},
            {' ', 'B', 'C', 'D'},
            {' ', ' ', ' ', 'C'}},
        .score = 0};
    bool result = update(&game, -1, 0);
    printf("%i\n", result);
    for (int i = 0; i < SIZE ; i++)
    {
        for (int j=0;j<SIZE;j++)
        {
        printf("%c |", game.board[i][j]);
        }
    printf("\n");
    }

    //     // another move is possible
    // struct game game = {
    //     .board = {
    //         {'A', 'A', 'C', 'D'},
    //         {'A', 'F', 'G', 'H'},
    //         {'I', 'J', 'J', 'A'},
    //         {'B', 'C', 'D', 'E'}
    //     },
    //     .score = 0
    // };

    // printf("is move possible: %d\n", is_move_possible(game));
    // // stdout: 1
    // another move is not possible
    // struct game game = {
    //     .board = {
    //         {'A', 'B', 'C', 'D'},
    //         {'E', 'F', 'G', 'H'},
    //         {'I', 'J', 'K', 'A'},
    //         {'B', 'C', 'D', 'E'}
    //     },
    //     .score = 0
    // };

    // printf("is move possible: %d\n", is_move_possible(game));
    // // stdout: 0

    // game is won
    // struct game game = {
    //     .board = {
    //         {'A', 'B', 'C', 'D'},
    //         {'E', 'F', 'G', 'H'},
    //         {'I', 'J', 'K', 'A'},
    //         {'B', 'C', 'D', 'E'}
    //     },
    //     .score = 0
    // };

    // printf("is won: %d\n", is_game_won(game));
    // stdout: 1
    // game is not won
    // struct game game = {
    //     .board = {
    //         {'A', ' ', ' ', ' '},
    //         {' ', ' ', ' ', ' '},
    //         {' ', ' ', ' ', 'A'},
    //         {'B', ' ', ' ', ' '}
    //     },
    //     .score = 0
    // };

    // printf("is won: %d\n", is_game_won(game));
    // // stdout: 0

    return 0;
}
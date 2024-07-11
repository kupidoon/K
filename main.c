#include <stdlib.h>
#include <stdio.h>
#include "k.h"
int main()
{
    struct game game = {
        .board = {
            {' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' '}},
        .score = 0};

    while (!is_game_won(game) && is_move_possible(game))
    {
        int dx = 0;
        int dy = 0;
        for (int i = 0; i < SIZE; i++)
        {
            int bre = 0;
            for (int j = 0; j < SIZE; j++)
            {

                if (game.board[i][j] == ' ')
                {
                    add_random_tile(&game);
                    bre++;
                    break;
                }
            }
            if (bre == 1)
            {
                break;
            }
        }

        char bukva = ' ';
        printf("a-left, d-right, s-down, w-up\n");
        scanf("%c", &bukva);
        if (bukva == 'A' || bukva == 'a')
        {
            dy = 0;
            dx = -1;
        }
        if (bukva == 'W' || bukva == 'w')
        {
            dy = -1;
            dx = 0;
        }
        if (bukva == 'd' || bukva == 'D')
        {
            dx = 1;
            dy = 0;
        }
        if (bukva == 'S' || bukva == 's')
        {
            dx = 0;
            dy = 1;
        }
        update(&game, dy, dx);
        printf("Kakoito tekst: %d\n", is_move_possible(game));
        int d = 0;
        while (d != 10)
        {
            printf("\n");
            d++;
        }
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                printf("%c |", game.board[i][j]);
            }
            printf("\n");
        }
    }
    if (is_game_won(game) == true)
    {
        printf("Starui BOH\n");
    }
    if (is_move_possible(game) != true)
    {
        printf("Game Over loh\n");
    }

    // for (int i = 0; i < SIZE ; i++)
    // {
    //     for (int j=0;j<SIZE;j++)
    //     {
    //     printf("%c |", game.board[i][j]);
    //     }
    // printf("\n");
    // }

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
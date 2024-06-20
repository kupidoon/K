#include <stdlib.h>
#include <stdio.h>
#include "k.h"

// void add_random_tile(struct game *game)
// {
//     int row, col;
//     // find random, but empty tile
//     do
//     {
//         row = rand() % SIZE;
//         col = rand() % SIZE;
//     } while (game->board[row][col] != ' ');

//     // place to the random position 'A' or 'B' tile
//     if (rand() % 2 == 0)
//     {
//         game->board[row][col] = 'A';
//     }
//     else
//     {
//         game->board[row][col] = 'B';
//     }
// }
// bool is_game_won(const struct game game)
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         for (int j = 0; j < SIZE; j++)
//         {
//             if (game.board[i][j]=='K')
//             {
//             return true;
//             }
//         }

//     }
//     return false;
// }
// bool is_move_possible(const struct game game)
// {
//     for (int i = 0; i < SIZE-1; i++)
//     {
//         for (int j = 0; j < SIZE-1; j++)
//         {
//         if(game.board[i][j]==game.board[i+1][j]||game.board[i][j]==game.board[i][j+1]||game.board[i+1][j]==' '||game.board[i][j+1]==' '){
//             return true;
//         }
//         }
//     }
//     return false;
// }
bool update(struct game *game, int dy, int dx)
{
    if (dy > 1 || dy < -1|| dx > 1 || dx < -1)
    {
        return false;
    }
    if ((dy != 0 && dx != 0) || (dy == 0 && dx == 0))
    {
        return false;
    }
    if (dx = 1)
    {
        
        for(int j=0;j<SIZE;j++)
        {
            for(int i=SIZE-1;i!=0;i--)
            {
                while(game->board[i][j]){
                    
                }
            }
        }
        

        
    }
    if (dx = -1)
    {
    
    }
    if (dy = 1)
    {
    
    }
    if (dy = -1)
    {
    
    }
}
// if (dy != 0)
//     {
//         if (dy == 1)
//         {
//             for (int i = 0; i < SIZE; i++)
//             {
//                 for (int j = 0; j < SIZE; j++)
//                 {
//                 }
//             }
//         }
//         if (dy == -1)
//         {
//             for (int i = 0; i < SIZE; i++)
//             {
//                 for (int j = 0; j < SIZE; j++)
//                 {
//                 }
//             }
//         }
//     }
//     if (dx != 0)
//     {
//         if (dx == 1)
//         {
//             for (int i = 0; i < SIZE; i++)
//             {
//                 for (int j = 0; j < SIZE; j++)
//                 {
//                 }
//             }
//         }
//         if (dx == -1)
//         {
//             for (int i = 0; i < SIZE; i++)
//             {
//                 for (int j = 0; j < SIZE; j++)
//                 {
//                 }
//             }
//         }
//     }
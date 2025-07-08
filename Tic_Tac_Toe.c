#include<stdio.h>
#include<stdlib.h>  // to use the exit(0); function 


#define row 3   // row of the tic-tac-toe game
#define column 3   // column of the tic-tac-toe game

char game_board[row][column]; // assigned the macroes to the game board matrix
int i, j;  

/*
    *  *  *                         X[0][0]  X[0][1]  X[0][2]  
    *  *  *  the indexes are -->    X[1][0]  X[1][1]  X[1][2]  
    *  *  *                         X[2][0]  X[2][1]  X[2][2]  
    
    
    *  *  *                                                                     1  2  3 
    *  *  *      the value will assign in the board according to keyboard is    4  5  6 
    *  *  *                                                                     7  8  9   

*/


// Declaration of all the necessary functions
int create_the_game_blueprint(); // for creating the game 1st entry in the terminal 
int value_insert_from_the_user(); // for inserting the value that user will give to play
int chek_winner();  // for checkng the winner of the game
int display_game_board(); // display the current game board



int main()
{
    // the main function will give the intro only and call the create_the_game_blueprint() function
    printf("Welcome to Tic Tac Toe!\n");
    printf("\nThe player first will chose the 1\nThe second player will choose 0\nClick the numberpad (1-9) to select the place\n");
    create_the_game_blueprint();
    char infinit = '1';
    return 0;
}



int create_the_game_blueprint()
{ 
    for( i = 0; i < row; i++ )
    {
        for( j = 0; j < column; j++ )
        {
            game_board[i][j] = '*';  // assign '*' to each box in the game board
            printf("%c\t", game_board[i][j]); // print the values in the game board
        }
        printf("\n");
    }

    value_insert_from_the_user();
    return 0;
}



int  display_game_board() {

    // it will display the board only after the value_insert_from_the_user() function will take values from the user
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%c\t", game_board[i][j]);
        }
        printf("\n");
    }

    return 0;
}



int value_insert_from_the_user() {
    int position;
    int k = 1;  // Start with k = 1 for the first turn

    for (k; k <= 9; k++) {  // We allow only 9 moves in total
        if (k % 2 != 0) {  // Player 1's turn
            printf("Player 1's turn. Enter position : ");
            scanf("%d", &position);
            if (position == 1 && game_board[0][0] == '*') 
            {
                game_board[0][0] = '1';
            } else if (position == 2 && game_board[0][1] == '*') 
            {
                game_board[0][1] = '1';
            } else if (position == 3 && game_board[0][2] == '*') 
            {
                game_board[0][2] = '1';
            } else if (position == 4 && game_board[1][0] == '*') 
            {
                game_board[1][0] = '1';
            } else if (position == 5 && game_board[1][1] == '*') 
            {
                game_board[1][1] = '1';
            } else if (position == 6 && game_board[1][2] == '*') 
            {
                game_board[1][2] = '1';
            } else if (position == 7 && game_board[2][0] == '*') 
            {
                game_board[2][0] = '1';
            } else if (position == 8 && game_board[2][1] == '*') 
            {
                game_board[2][1] = '1';
            } else if (position == 9 && game_board[2][2] == '*') 
            {
                game_board[2][2] = '1';
            } else 
            {
                printf("Invalid position or the place is already filled. Try again!\n");
                k--;  // Decrement 'k' to let the player play again. This will work like a infinite loop
                continue;
            }
            chek_winner();
        } 
        else 
        {  // Player 2's turn
            printf("Player 2's turn. Enter position (1-9): ");
            scanf("%d", &position);
            if (position == 1 && game_board[0][0] == '*') 
            {
                game_board[0][0] = '0';
            } else if (position == 2 && game_board[0][1] == '*') 
            {
                game_board[0][1] = '0';
            } else if (position == 3 && game_board[0][2] == '*') 
            {
                game_board[0][2] = '0';
            } else if (position == 4 && game_board[1][0] == '*') 
            {
                game_board[1][0] = '0';
            } else if (position == 5 && game_board[1][1] == '*') 
            {
                game_board[1][1] = '0';
            } else if (position == 6 && game_board[1][2] == '*') 
            {
                game_board[1][2] = '0';
            } else if (position == 7 && game_board[2][0] == '*') 
            {
                game_board[2][0] = '0';
            } else if (position == 8 && game_board[2][1] == '*') 
            {
                game_board[2][1] = '0';
            } else if (position == 9 && game_board[2][2] == '*') 
            {
                game_board[2][2] = '0';
            } else 
            {
                printf("Invalid position or the place is already filled. Try again!\n");
                k--;  // Decrement 'k' to let the player play again. This will work like a infinite loop
                continue;
            }
            chek_winner();
        }

        display_game_board(); // Display the board after each move 
    }
    chek_winner(); 
    return 0;
}



int chek_winner()
{
    // Check rows
    for (i = 0; i < row; i++) 
    {
        if (game_board[i][0] == game_board[i][1] && game_board[i][1] == game_board[i][2] && game_board[i][0] != '*') 
        /*
        the working of the condition will work like --> X[row(n)][col1] == X[row(n)][col2] == X[row(n)][col3] 
        and n will be continue for row1 row2 and row3
        */
        {
            printf("Player %c wins!\n", game_board[i][0]);
            exit(0);
        }
    }
    // Check columns
    for (j = 0; j < column; j++) 
    {
        if (game_board[0][j] == game_board[1][j] && game_board[1][j] == game_board[2][j] && game_board[0][j] != '*') 
        /*
        the working of the condition will work like X[row1][col(n)] == X[row2][col(n)] == X[row2][col(n)]
        and the n wll be continue for column 1 column 2 and column 3 
        */
        {
            printf("Player %c wins!\n", game_board[0][j]);
            exit(0);
        }
    }
    // Check diagonals
    if (game_board[0][0] == game_board[1][1] && game_board[1][1] == game_board[2][2] && game_board[0][0] != '*') 
    {
        printf("Player %c wins!\n", game_board[0][0]);
        exit(0);
    }
    if (game_board[0][2] == game_board[1][1] && game_board[1][1] == game_board[2][0] && game_board[0][2] != '*') 
    {
        printf("Player %c wins!\n", game_board[0][2]);
        exit(0);
    }

    return 0;
}



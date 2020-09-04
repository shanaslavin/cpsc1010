// Shana Slavin
// CPSC1010, 001
// Due March 31, 2017
// Lab 9
// Working with 2-dimensional arrays
//
// ticTacShell.c
//
// Shell of the game 'TicTacToe' for CpSc 1010/1011
//
#include <stdio.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h>    // time()


// Size of the board (square)
const int  BOARD_SIZE     = 3;

// Symbols used for the board
const char BLANK_SYMBOL   = ' ';
const char COMP_SYMBOL    = 'O';
const char HUMAN_SYMBOL   = 'X';

// Human goes first
const int  HUMANS_TURN    = 0;
const int  COMPUTERS_TURN = 1;


// Function prototypes
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);
int  hasWon(char board[BOARD_SIZE][BOARD_SIZE], char mark);
int  hasWonHorizontal(char board[BOARD_SIZE][BOARD_SIZE], char mark);
int  hasWonVertical(char board[BOARD_SIZE][BOARD_SIZE], char mark);
int  hasWonDiagonal(char board[BOARD_SIZE][BOARD_SIZE], char mark);
void getComputerMove(char board[BOARD_SIZE][BOARD_SIZE]);
void getHumanMove(char board[BOARD_SIZE][BOARD_SIZE]);
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);
void clearScreen(void);


//
// The main function should not be changed
//
int main(void) {
    char board[BOARD_SIZE][BOARD_SIZE];
    int  humanWon    = 0; // boolean (0/1)
    int  computerWon = 0; // boolean (0/1)
    int  move        = 0;

    // Seed the random number generator
    srand(time(0));

    initializeBoard(board);

    while ((move < (BOARD_SIZE * BOARD_SIZE)) && !humanWon && !computerWon) {
        clearScreen();

        if ((move % 2) == COMPUTERS_TURN) {
            getComputerMove(board);
        } else {
            printBoard(board);
            getHumanMove(board);
        }

        computerWon = hasWon(board, COMP_SYMBOL);
        humanWon    = hasWon(board, HUMAN_SYMBOL);
        move++;
    }

    clearScreen();
    printBoard(board);

    if (humanWon) {
        printf(">>>> You won!\n");
    } else if (computerWon) {
        printf("<<<< I won!\n");
    } else { // move >= BOARD_SIZE * BOARD_SIZE
        printf("==== A Draw\n");  
    }

    return 0;
}


//
// Initialized the board to all BLANK_SYMBOL
//
void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row;

    for (row = 0; row < BOARD_SIZE; row++) {
        int col;

        for (col = 0; col < BOARD_SIZE; col++) {
            board[row][col] = BLANK_SYMBOL;
        }
    }
}


//
// Determines if the 'mark' completely fills a row, column, or diagonal
// returns 1 if yes, 0 if no
//
int hasWon(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    return    hasWonHorizontal(board, mark)
           || hasWonVertical(board, mark)
           || hasWonDiagonal(board, mark);
}


//
// Determines if the 'mark' completely fills a row
// returns 1 if yes, 0 if no
//
int hasWonHorizontal(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    int won = 0; // boolean (0/1).  Assume lost until proven true
    int row;

    for (row = 0; row < BOARD_SIZE && !won; row++) {
        int match = 1; // boolean (0/1)
        int col;

        for (col = 0; col < BOARD_SIZE; col++) {
            if (board[row][col] != mark) {
                match = 0;
            }
        }

        won = match;
    }

    return won;
}


//
// Determines if the 'mark' completely fills a column
// returns 1 if yes, 0 if no
//
int hasWonVertical(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    int won = 0; //boolean (0/1)
    int column = 0;

    for (column = 0; column < BOARD_SIZE && !won; column++){
        int match = 1;
        int row;
       
       for (row = 0; row < BOARD_SIZE; row++){
	   if(board[row][column] != mark){
               match = 0;
          }
       }
    
    won = match;
    }

    return won; // Stub -- make this return the correct value
}


//
// Determines if the 'mark' completely fills a diagonal
// returns 1 if yes, 0 if no
//
int hasWonDiagonal(char board[BOARD_SIZE][BOARD_SIZE], char mark) {
    int won = 0;
    int match = 0;

    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) {
       match = 1;
       won = match;
    }

    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark){
       match = 1;
       won = match;
    }

    return won; // Stub -- make this return the correct value
}


//
// Gets computer move by randomly picking an unoccupied cell
//
void getComputerMove(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row;
    int col;

    do {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (board[row][col] != BLANK_SYMBOL);

    board[row][col] = COMP_SYMBOL;
}


//
// Gets human move by prompting user for row and column numbers
//
void getHumanMove(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row = 0;
    int column = 0;

    printf ("Enter the row:\n");
         scanf(" %i", &row);
    printf ("Enter the column:\n");
         scanf(" %i", &column);
    board[row][column] = HUMAN_SYMBOL;
}


//
// Prints the board to the screen.  Example:
//
//       0   1   2
//     +---+---+---+
//   0 | X |   |   |
//     +---+---+---+
//   1 |   | O | O |
//     +---+---+---+
//   2 |   |   | X |
//     +---+---+---+
//
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    printf("    0   1   2   \n");
    printf("  +---+---+---+\n");

    int i; 

    for (i = 0; i < BOARD_SIZE; i++){
        printf("%d | %c | %c | %c |\n", i, board[i][0], board[i][1], board[i][2]);
        printf("  +---+---+---+\n");
	}

    
}



//
// Clears the screen -- uses ANSI terminal control codes
//
void clearScreen(void) {
    const char ESC = 27;

    printf("%c[2J%c[H", ESC, ESC);
}

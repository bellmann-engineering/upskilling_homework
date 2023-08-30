#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display the game board
void displayBoard(char** board, int size) {
    printf("\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf(" %c ", board[i][j]);
            if (j < size - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < size - 1) {
            for (int j = 0; j < size; j++) {
                printf("---");
                if (j < size - 1) {
                    printf("+");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}

// Function to check if the move is valid
int isValidMove(char** board, int size, int row, int col) {
    return (row >= 0 && row < size && col >= 0 && col < size && board[row][col] == ' ');
}

// Function to mark a cell with the player's symbol
void markCell(char** board, int size, int row, int col, char symbol) {
    board[row][col] = symbol;
}

// Function to check if a player has won
int checkWin(char** board, int size, char symbol) {
    for (int i = 0; i < size; i++) {
        int rowWin = 1, colWin = 1;
        for (int j = 0; j < size; j++) {
            if (board[i][j] != symbol) {
                rowWin = 0;
            }
            if (board[j][i] != symbol) {
                colWin = 0;
            }
        }
        if (rowWin || colWin) {
            return 1; // Win detected
        }
    }

    int diagonal1Win = 1, diagonal2Win = 1;
    for (int i = 0; i < size; i++) {
        if (board[i][i] != symbol) {
            diagonal1Win = 0;
        }
        if (board[i][size - i - 1] != symbol) {
            diagonal2Win = 0;
        }
    }

    if (diagonal1Win || diagonal2Win) {
        return 1; // Win detected
    }

    return 0; // No win
}

// Function for AI opponent's move
void aiMove(char** board, int size, char symbol) {
    int row, col;
    do {
        srand(time(NULL));
        row = rand() % size;
        col = rand() % size;
    } while (!isValidMove(board, size, row, col));

    printf("AI Opponent's move: %d %d\n", row + 1, col + 1);
    markCell(board, size, row, col, symbol);
    displayBoard(board, size);
}

int main() {
    int size;
    printf("Enter the board size (e.g., 3 for 3x3): ");
    scanf("%d", &size);

    char** board = (char**)malloc(size * sizeof(char*));
    for (int i = 0; i < size; i++) {
        board[i] = (char*)malloc(size * sizeof(char));
        for (int j = 0; j < size; j++) {
            board[i][j] = ' ';
        }
    }

    int currentPlayer = 1;

    printf("Tic-Tac-Toe Game\nPlayer 1: X | AI Opponent: O\n\n");
    displayBoard(board, size);

    int moves = 0;
    while (1) {
        if (currentPlayer == 1) {
            int row, col;
            printf("Player %d, enter row and column (1-%d) for your move: ", currentPlayer, size);
            scanf("%d %d", &row, &col);

            if (isValidMove(board, size, row - 1, col - 1)) {
                markCell(board, size, row - 1, col - 1, 'X');
                displayBoard(board, size);
                moves++;

                if (checkWin(board, size, 'X')) {
                    printf("Player %d wins!\n", currentPlayer);
                    break;
                } else if (moves == size * size) {
                    printf("It's a draw!\n");
                    break;
                }

                currentPlayer = 2;
            } else {
                printf("Invalid move. Try again.\n");
            }
        } else {
            aiMove(board, size, 'O');
            moves++;

            if (checkWin(board, size, 'O')) {
                printf("AI Opponent wins!\n");
                break;
            } else if (moves == size * size) {
                printf("It's a draw!\n");
                break;
            }

            currentPlayer = 1;
        }
    }

    // Free dynamically allocated memory
    for (int i = 0; i < size; i++) {
        free(board[i]);
    }
    free(board);

    return 0;
}

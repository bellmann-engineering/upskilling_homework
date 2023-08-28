#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 3

void displayBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    printf("\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < BOARD_SIZE - 1) {
            printf("---+---+---\n");
        }
    }
    printf("\n");
}

int isValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
    return (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ');
}

void markCell(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char symbol) {
    board[row][col] = symbol;
}

int checkWin(char board[BOARD_SIZE][BOARD_SIZE]) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1; // Win detected
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1; // Win detected
        }
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1; // Win detected
    }

    return 0; // No win
}

void aiMove(char board[BOARD_SIZE][BOARD_SIZE], char symbol) {
    int row, col;
    do {
        srand(time(NULL));
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (!isValidMove(board, row, col));

    printf("AI Opponent's move: %d %d\n", row + 1, col + 1);
    markCell(board, row, col, symbol);
    displayBoard(board);
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int currentPlayer = 1;

    printf("Tic-Tac-Toe Game\nPlayer 1: X | AI Opponent: O\n\n");
    displayBoard(board);

    int moves = 0;
    while (1) {
        if (currentPlayer == 1) {
            int row, col;
            printf("Player %d, enter row and column (1-3) for your move: ", currentPlayer);
            scanf("%d %d", &row, &col);

            if (isValidMove(board, row - 1, col - 1)) {
                markCell(board, row - 1, col - 1, 'X');
                displayBoard(board);
                moves++;

                if (checkWin(board)) {
                    printf("Player %d wins!\n", currentPlayer);
                    break;
                } else if (moves == 9) {
                    printf("It's a draw!\n");
                    break;
                }

                currentPlayer = 2;
            } else {
                printf("Invalid move. Try again.\n");
            }
        } else {
            aiMove(board, 'O');
            moves++;

            if (checkWin(board)) {
                printf("AI Opponent wins!\n");
                break;
            } else if (moves == 9) {
                printf("It's a draw!\n");
                break;
            }

            currentPlayer = 1;
        }
    }

    return 0;
}
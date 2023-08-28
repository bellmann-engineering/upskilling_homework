# Embedded: Homework 4

## C Programming Practice Tasks

## Pointers

## Tic-Tac-Toe Game Exercise

In this exercise, you will create a simple Tic-Tac-Toe game using C programming. The basic game involves two players taking turns to mark their symbols ('X' and 'O') on a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins.

![TTT](istockphoto-1365567894-612x612.jpg)

**Basic Exercise:**
For representing the game board, we'll use a 3x3 grid as a 2D array of characters. Each cell will contain 'X', 'O', or a space ' ' to indicate a player's move or an empty cell.


|   |   |   |
|---|---|---|
| 1 | 2 | 3 |
|---|---|---|
| 4 | 5 | 6 |
|---|---|---|
| 7 | 8 | 9 |

1. Start by defining a 3x3 grid for the Tic-Tac-Toe board using a 2D array.
**Hint**: https://www.w3schools.com/c/c_arrays_multi.php
2. Implement a function to display the current state of the game board.
3. Implement a function to handle player turns. Allow players to input their moves and update the board accordingly.
4. Create a function to check for a win or a draw condition.

**Possible Extension 1: AI Opponent**
Extend the game to allow a player to play against an AI opponent. The AI can make random moves initially. As a challenge, you can enhance the AI's strategy to block the player's moves and attempt to win.

Note: This is no real AI by any means but at least we get the feeling... ;-)

**Possible Extension 2: Dynamic Board Size**
Modify the game to support a dynamic board size. Allow players to specify the size of the board at the beginning (e.g., 4x4, 5x5). Adjust the win condition to check for a sequence of player symbols.

Use dynamic memory allocation to archieve the dynamic board size.

Don't forget to free the allocated memory in the end.

**Hint:**
- Use a 2D array to represent the game board. You can use characters ('X', 'O', ' ') to represent player moves and empty cells.
- Utilize pointers to navigate through the board and update cells during player turns.
- Implement functions for displaying the board, handling player moves, and checking the win condition.



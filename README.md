# Tic-Tac-Toe in C

A two-player tic-tac-toe game for the terminal, written in C.

## Features

- Plays on a 3x3 board, placing (x) or (o) on each turn.
- Declares a winner as soon as a player gets 3 in a row, either (x) or (o).
- Three in a row can be horizontal, vertical or diagonal.
- Declares a draw when all 9 boxes are filled and neither player has 3 in a row.

## Compile and run

    gcc tictactoe.c -o tictactoe
    ./tictactoe

On Windows, run `tictactoe.exe` instead of `./tictactoe`.

## How to play

Players take turns choosing a box on the board. The game ends when someone wins or the board is full.

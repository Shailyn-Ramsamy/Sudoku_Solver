# Sudoku Solver

This is a C++ program that solves Sudoku puzzles using a backtracking algorithm.

## Introduction

Sudoku is a logic-based number placement puzzle. The goal is to fill a 9x9 grid with digits so that each column, each row, and each of the nine 3x3 subgrids that compose the grid contain all of the digits from 1 to 9.

This program reads a partially filled Sudoku grid as input and attempts to solve it using a backtracking algorithm.

## How to Use

1. Compile the program using a C++ compiler:
   ```c++
     g++ -o SudokuSolver SudokuSolver.cpp
   ```

2. Run the compiled program:
   ```c++
     ./SudokuSolver
   ```

3. Input the Sudoku puzzle grid row by row. Enter '0' for empty cells.

4. The program will attempt to solve the Sudoku puzzle and display the solution if successful.

## Code Overview

- `printSudoku`: A function that prints the Sudoku grid.

- `Valid`: A function that checks whether placing a number at a given position is valid according to Sudoku rules.

- `SudokuSolver`: The main solving function using backtracking. It tries to fill in the Sudoku grid while respecting the rules.

- `main`: Reads the input Sudoku grid, calls the solving function, and prints the solution if found.

## Example Usage

### 1. Input:
   5 3 0 0 7 0 0 0 0
   6 0 0 1 9 5 0 0 0
   0 9 8 0 0 0 0 6 0
   8 0 0 0 6 0 0 0 3
   4 0 0 8 0 3 0 0 1
   7 0 0 0 2 0 0 0 6
   0 6 0 0 0 0 2 8 0
   0 0 0 4 1 9 0 0 5
   0 0 0 0 8 0 0 7 9

### 2. Output:
   5 3 4 6 7 8 9 1 2
   6 7 2 1 9 5 3 4 8
   1 9 8 3 4 2 5 6 7
   8 5 9 7 6 1 4 2 3
   4 2 6 8 5 3 7 9 1
   7 1 3 9 2 4 8 5 6
   9 6 1 5 3 7 2 8 4
   2 8 7 4 1 9 6 3 5
   3 4 5 2 8 6 1 7 9


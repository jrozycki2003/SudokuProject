#pragma once

#define N 9

void write(std::string out, int tab[N][N]);
void print(int arr[N][N]);
bool isSafe(int grid[N][N], int row, int col, int num);
bool solveSudoku(int grid[N][N], int row, int col);

#include <iostream>
#include <math.h>
#include <fstream>
#include "sudoku.h"
using namespace std;

int X = 0;


int main()
{
    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },

                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },

                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },

                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },

                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },

                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },

                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },

                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },

                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };


    if (solveSudoku(grid, 0, 0))

        print(grid);

    else

        cout << "no solution  exists " << endl;
    return 0;
}

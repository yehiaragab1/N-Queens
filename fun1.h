/* C++ program to solve N Queen Problem using
   backtracking */
#include<iostream>
using namespace std;
#define N 4

int ld[30] = { 0 };

int rd[30] = { 0 };

int cl[30] = { 0 };

void printSolution(int board[N][N]);

bool solveNQUtil(int board[N][N], int col);

bool solveNQ();

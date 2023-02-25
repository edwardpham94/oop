#include <iostream>
using namespace std;
#define N 50

void boardPrinted(int n, char boardGame[N][N]);

void NQueens(char boardGame[N][N], int col[N], int row[N], int array1[N], int array2[N], int i, int number, int& temp);

void printAns(int row[N], char a[N][N], int number, int& temp);
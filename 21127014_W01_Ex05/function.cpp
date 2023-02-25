#include <iostream>
#include "function.h"
using namespace std;
void boardPrinted(int n, char boardGame[N][N]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            boardGame[i][i] = '_';
}

void NQueens(char boardGame[N][N], int col[N], int row[N], int array1[N], int array2[N], int i, int number,  int& temp) {
    for (int j = 1; j <= number; j++) {
        if (col[j] == 1 && array1[i - j + number] == 1 && array2[i + j - 1] == 1) {
            col[j] = array1[i - j + number] = array2[i + j - 1] = 0;
            row[i] = j;
            if (i == number) {
                printAns(row, boardGame, number, temp);
            }
            else {
                NQueens(boardGame, col, row, array1, array2, i + 1, number, temp);
            }
            col[j] = array1[i - j + number] = array2[i + j - 1] = 1;
        }
    }
}

void printAns(int row[N], char a[N][N], int number, int& temp) {
    cout << "\nCase No." << temp + 1 << ':' << endl;
    for (int i = 1; i <= number; i++)
        a[i - 1][row[i] - 1] = '0';
    for (int i = 0; i < number; i++) {
        for (int j = 0; j < number; j++) {
            if (a[i][j] == '0') {
                cout << "Queen : " << i << ' ' << j << endl;
            }
        }
    }
    for (int i = 1; i <= number; i++)
        a[i - 1][row[i] - 1] = '_';
    temp++;
}
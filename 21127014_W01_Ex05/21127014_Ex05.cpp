#include <iostream>
#include "function.h"
using namespace std;



int main()
{
	int col[N], row[N], array1[N], array2[N];
	char boardgame[N][N];
	int temp = 0;

	int number;
	cout << "Enter the n (n>3)  = ";
	cin >> number;
	for (int i = 0; i < N; i++) {
		col[i] = array2[i] = row[i] = array1[i] = 1;
	}
	boardPrinted(number, boardgame);
	NQueens(boardgame, col, row, array1, array2, 1, number,  temp);

	return 0;
}

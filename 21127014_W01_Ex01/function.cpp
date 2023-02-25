#include<iostream>
#include"function.h"
using namespace std;

int fibonacci(int n) {
	if (n <= 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int xFunction(int n) {
	if (n < 1) return 1;
	return	xFunction(n - 1) + yFunction(n - 1);
}
int yFunction(int n) {
	if (n < 1) return 0;
	return 3 * xFunction(n - 1) + 2 * yFunction(n - 1);
}

int XnSequence(int n) {
	if (n < 1) return 1;
	for (int i = 0; i < n; i++) {
		return (n - i) * (n - i) * XnSequence(i);
	}
}

int nCombinatorics(int n, int k) {
	if (k == 0 || k == n) {
		return 1;
	}
	return nCombinatorics(n - 1, k) + nCombinatorics(n - 1, k - 1);
}

void toBinary(int n) {
	if (n == 0) return;
	else {
		int temp = n % 2;
		toBinary(n / 2);
		cout << temp;
	}
}

int sumDigits(int n) {
	if (n < 10) return n;
	return n % 10 + sumDigits(n / 10);
}


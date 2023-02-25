
#include<iostream>
#include "function.h"
using namespace std;

void inputArr(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> arr[i];
	}
}

void outputArrRecursion(int* arr, int i, int n) {
	if (i >= n) return;
	cout << arr[i] << "\t";
	outputArrRecursion(arr, i + 1, n);
}


void outputArrRecursionReversed(int* arr, int i) {
	if (i < 0) return;
	cout << arr[i] << "\t";
	outputArrRecursionReversed(arr, i - 1);
}

int sumOfPositive(int* arr, int i, int n, int sum)
{
	if (i >= n) return sum;
	if (arr[i] > 0) {
		sum = sum + arr[i];
	}
	sumOfPositive(arr, i + 1, n, sum);
}

bool oddNumberArray(int* arr, int i, int n, bool& check) {
	if (i >= n) return check;
	if (arr[i] % 2 == 0) {
		check = 0;
		return check;
	}
	oddNumberArray(arr, i + 1, n, check);
}

int maximum(int* arr, int i, int n, int& max) {
	if (i >= n) return max;
	if (arr[i] > max) max = arr[i];
	maximum(arr, i + 1, n, max);
}

void increase(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}

int countDistinct(int* arr, int i, int n, int& count) {
	if (i >= n) return count;
	if (arr[i] != arr[i + 1]) count++;
	countDistinct(arr, i + 1, n, count);
}
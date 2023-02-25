#include<iostream>
#include "function.h"
using namespace std;
 
int main() {
	int *arr, n;
	cout << "Enter the number of the array  : ";
	cin >> n;
	arr = new int[n];
	inputArr(arr, n);
	int i = 0;

	// output the array of number n
	cout << endl << "Output array : ";
	outputArrRecursion(arr, i, n);

	// output the array in reversed
	i = n - 1;
	cout << endl << "Output array : ";
	outputArrRecursionReversed(arr, i);

	// the sum of positive number in the array
	i = 0;
	int sum = 0;
	cout << "\nSum of Positive number : " << sumOfPositive(arr, i, n, sum);

	// count distinct value 
	int count = 0;
	increase(arr, n);
	cout << "\nThe number of distinct number : " << countDistinct(arr, i, n, count);

	// check odd array-number
	bool check = 1;
	cout << "\nThe array only contains odd numeber : " << oddNumberArray(arr, i, n, check);
	
	// maximum
	int max = arr[0];
	cout << "\nMaximum value : " << maximum(arr, i + 1, n, max);

	delete[]arr;
}

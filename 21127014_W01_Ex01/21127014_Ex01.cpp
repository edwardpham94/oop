#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	int n;
	cout << "Enter the number n : ";
	cin >> n;

	cout << "\nFIBONACCI:\n";
	cout << "f(" << n << ") = " << fibonacci(n);
	cout << endl;

	cout << "\nSUM : ";
	cout << "\nx(" << n << ") = " << xFunction(n);
	cout << "\ny(" << n << ") = " << yFunction(n);
	cout << endl;

	cout << "\nSum sequence : "
		 << "x(" << n << ") = " << XnSequence(n);
	cout << endl;

	int k;
	cout << "Enter k = ";
	cin >> k;
	cout << n << " combinatorics of k : C(n, k) = C(" << n << ", " << k << ") = " << nCombinatorics(n, k);
	cout << endl;

	int number;
	cout << "Enter the number : ";
	cin >> number;

	cout << "Decimal to Binary : ";
	toBinary(n);
	cout << endl;

	cout << "\nSum digits of " << number << " : " << sumDigits(number);
}

#include<iostream>
#include "function.h"
#include<string.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter the length of string : ";
	cin >> n;
	char* s = new char[n];
	cout << "Enter the string : ";
	cin >> s;
	int r;
	for (int i = 0; i < n; i++) {
		if (s[i] == '\0') {
			r = i - 1;
			break;
		}
	}
	bool check = isPalindrome(0, r, s);
	if (check == true) cout << "The string is Palindrome" << endl;
	else cout << "The string is NOT Palindrome" << endl;
	return 0;
}
#include<iostream>
#include<string.h>
#include "function.h"
using namespace std;

bool isPalindrome(int l, int r, char* s) {
	if (r < l) {
		return 1;
	}
	if (s[l] == s[r]){
		return isPalindrome(l + 1, r - 1, s);
	}
	else return 0;
}
#include"function.h"

int main() {
	PhanSo a(4, 5), b(3, 2);
	PhanSo c;
	
	c = a;
	cout << c;

	c = a + b;
	cout << c;

	c = a - b;
	cout << c;

	c = a * b;
	cout << c;

	c = a / b;
	cout << c;

	c += a;
	cout << c;

	c -= a;
	cout << c;

	c *= a;
	cout << c;

	c /= a;
	cout << c;

	bool d;
	d = (a == c);
	
	c++;
	cout << c;

	c--;
	cout << c;

	++c;
	cout << c;

	--c;
	cout << c;


	cin >> a;
	cout << a;


}
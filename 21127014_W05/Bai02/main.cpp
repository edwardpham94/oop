#include"function.h"

int main() {
	MangSoNguyen temp;
	cin >> temp;
	cout << temp;

	MangSoNguyen a(4), b(6);

	MangSoNguyen c;
	c = a + b;
	cout << c;

	c++;
	cout << c;
	++c;
	cout << c;

}
#include"function.h"

int main() {
	Point a, b;
	a.inputPoint(a);
	b.inputPoint(b);
	a.outputPoint(a);
	b.outputPoint(b);

	cout << endl << "Distance between a & b = " << a.distance(a, b);
}
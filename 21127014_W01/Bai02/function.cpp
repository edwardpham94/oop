#include"function.h"

void Point::inputPoint(Point& a) {
	cout << "x = ";
	cin >> a.x;
	cout << "y = ";
	cin >> a.y;
	cout << endl;
}


void Point::outputPoint(Point a) {
	cout << "Point (" << a.x << "," << a.y << ")\n";
}

double Point::distance(Point a, Point b) {
	double dis = (b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y);
	return sqrt(dis);
}
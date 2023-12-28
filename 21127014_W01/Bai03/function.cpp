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

void HCN::inputHCN(HCN& a)
{
	cout << "Input HCN\n";
	for (int i = 0; i < 4; i++) {
		a.hcn[i].inputPoint(a.hcn[i]);
	}
}

void HCN::outputHCN(HCN a) {
	cout << "Output HCN\n";
	for (int i = 0; i < 4; i++) {
		a.hcn[i].outputPoint(a.hcn[i]);
	}
}


bool HCN::isHCN(HCN a) {
	double canhDai1 = a.hcn[0].distance(a.hcn[0], a.hcn[1]);
	double canhDai2 = a.hcn[0].distance(a.hcn[2], a.hcn[3]);
	double canhNgan1 = a.hcn[0].distance(a.hcn[0], a.hcn[3]);
	double canhNgan2 = a.hcn[0].distance(a.hcn[1], a.hcn[2]);

	if (canhDai1 == canhDai2 && canhNgan1 == canhNgan2) return true;
	return false;
}


double HCN::chuVi(HCN a) {
	double canhDai = a.hcn[0].distance(a.hcn[0], a.hcn[1]);
	double canhNgan = a.hcn[0].distance(a.hcn[0], a.hcn[3]);
	return (canhDai + canhNgan) * 2;
}

double HCN::dienTich(HCN a) {
	double canhDai = a.hcn[0].distance(a.hcn[0], a.hcn[1]);
	double canhNgan = a.hcn[0].distance(a.hcn[0], a.hcn[3]);
	return (canhDai * canhNgan);
}
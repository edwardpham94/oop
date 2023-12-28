#include<iostream>
#include<math.h>

using namespace std;

class Point
{
	double x;
	double y;
public:
	void inputPoint(Point& a);
	void outputPoint(Point a);
	double distance(Point a, Point b);

private: 

};

class HCN
{
	Point hcn[4];

public:
	void inputHCN(HCN& a);
	void outputHCN(HCN a);
	bool isHCN(HCN a);
	double chuVi(HCN a);
	double dienTich(HCN a);
private:

};

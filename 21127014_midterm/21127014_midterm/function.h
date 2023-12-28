#include<iostream>
#include<vector>
#include<string>
#include<istream>
#include<ostream>
using namespace std;


class Diem {

private:
	int* x;
	int* y;

public:
	Diem() : Diem(1,1){}

	Diem(int x, int y);

	friend istream& operator>>(istream& is, Diem& temp);

	friend ostream& operator<<(ostream& os, const Diem& temp);

	Diem operator =(const Diem& temp);

	~Diem();

	void setX(int x);

	void setY(int x);

};

class QuanCo {

private:
	string name;
	vector<Diem> listDiem;
	Diem currentPoint;

public:
	QuanCo() : QuanCo("", 0, 0){}

	QuanCo(string name, int x, int y);

	QuanCo(string name, vector<Diem> listDiem, Diem currentPoint);

	QuanCo(const QuanCo& temp);

	void inputQuanCo();

	void outputQuanCo();
};

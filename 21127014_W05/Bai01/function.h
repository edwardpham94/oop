#include<iostream>
#include<istream>
using namespace std;


class PhanSo
{
protected:
	int* tuso;
	int* mauso;
public:
	
	PhanSo();
	PhanSo(int x, int y);
	
	~PhanSo();

	PhanSo rutGon();

	PhanSo& operator =(const PhanSo& temp);
	PhanSo operator +(const PhanSo& a);
	PhanSo operator -(const PhanSo& a);
	PhanSo operator *(const PhanSo& a);
	PhanSo operator /(const PhanSo& a);

	PhanSo& operator +=(const PhanSo& a);
	PhanSo& operator -=(const PhanSo& a);
	PhanSo& operator *=(const PhanSo& a);
	PhanSo& operator /=(const PhanSo& a);

	bool operator ==(const PhanSo& a);
	bool operator >=(const PhanSo& a);
	bool operator <=(const PhanSo& a);
	bool operator !=(const PhanSo& a);

	PhanSo& operator ++();
	PhanSo operator ++(int x);
	PhanSo& operator --();
	PhanSo operator --(int x);

	friend istream& operator >>(istream& is, const PhanSo& a);
	friend ostream& operator <<(ostream& os, const PhanSo& a);
private:
};

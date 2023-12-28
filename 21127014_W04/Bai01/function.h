#include<iostream>
#include<iomanip>
using namespace std;

class PhanSo
{
protected:
	int* tuSo;
	int* mauSo;

public:
	PhanSo();
	PhanSo(int a);
	PhanSo(int a, int b);
	PhanSo(const PhanSo& temp);
	~PhanSo();
	int getTuSo();
	int getMauSo();
	void setTuSo(int a);
	void setMauSo(int a);
	void inputPhanSo();
	void outputPhanSo();
	PhanSo rutGon();
	PhanSo& operator=(const PhanSo& ps);
	PhanSo operator+ (const PhanSo& ps);
	PhanSo operator- (const PhanSo& ps);
	PhanSo operator*(const PhanSo& p);
	PhanSo operator/(const PhanSo& p);
private:

};

int uocChungMax(int a, int b);



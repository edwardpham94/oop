#include<iostream>
#include<iomanip>
using namespace std;

class PHANSO
{
	int tuSo;
	int mauSo;
public:
	void inputPhanSo();

	void outputPhanSo1();

	void outputPhanSo2();

	void outputPhanSo(PHANSO a);

	void congPhanSo(PHANSO a, PHANSO b);

	void truPhanSo(PHANSO a, PHANSO b);

	void nhanPhanSo(PHANSO a, PHANSO b);

	void chiaPhanSo(PHANSO a, PHANSO b);

	void tinhToan(PHANSO a, PHANSO b);

	PHANSO rutGon(PHANSO a);


	void toiGian(PHANSO a);

private:

};

int uocChungMax(int a, int b);

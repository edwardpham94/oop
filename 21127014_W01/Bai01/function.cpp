#include"function.h"


void PHANSO::inputPhanSo() {
	cout << "Tu So = ";
	cin >> tuSo;
	cout << "Mau So = ";
	cin >> mauSo;
}

void PHANSO::outputPhanSo1() {
	double result = (double)tuSo / mauSo;
	cout << tuSo << "/" << mauSo;
}

void PHANSO::outputPhanSo2() {
	double result = (double)tuSo / mauSo;
	cout << result;
}

void PHANSO::outputPhanSo(PHANSO a) {
	cout << "Phan so da nhap : ";
	a.outputPhanSo1();
	cout << " hay ";
	a.outputPhanSo2();
	cout << endl << endl;
}

void PHANSO::congPhanSo(PHANSO a, PHANSO b) {
	PHANSO result;
	result.tuSo = a.tuSo * b.mauSo + a.mauSo * b.tuSo;
	result.mauSo = a.mauSo * b.mauSo;
	rutGon(result);

	cout << "Ket qua cua : ";
	a.outputPhanSo1();
	cout << " + ";
	b.outputPhanSo1();
	cout << " = ";
	result.outputPhanSo1();
	cout << endl;

}

void PHANSO::truPhanSo(PHANSO a, PHANSO b) {
	PHANSO result;
	result.tuSo = a.tuSo * b.mauSo - a.mauSo * b.tuSo;
	result.mauSo = a.mauSo * b.mauSo;
	rutGon(result);

	cout << "Ket qua cua : ";
	a.outputPhanSo1();
	cout << " - ";
	b.outputPhanSo1();
	cout << " = ";
	result.outputPhanSo1();
	cout << endl;

}

void PHANSO::nhanPhanSo(PHANSO a, PHANSO b) {
	PHANSO result;
	result.tuSo = a.tuSo * b.tuSo;
	result.mauSo = a.mauSo * b.mauSo;
	rutGon(result);

	cout << "Ket qua cua : ";
	a.outputPhanSo1();
	cout << " * ";
	b.outputPhanSo1();
	cout << " = ";
	result.outputPhanSo1();
	cout << endl;

}

void PHANSO::chiaPhanSo(PHANSO a, PHANSO b) {
	PHANSO result;
	result.tuSo = a.tuSo * b.mauSo;
	result.mauSo = a.mauSo * b.tuSo;
	rutGon(result);

	cout << "Ket qua cua : ";
	a.outputPhanSo1();
	cout << " : ";
	b.outputPhanSo1();
	cout << " = ";
	result.outputPhanSo1();
	cout << endl;
}



PHANSO PHANSO::rutGon(PHANSO a) {
	int ucln = uocChungMax(a.tuSo, a.mauSo);

	a.tuSo = a.tuSo / ucln;
	a.mauSo = a.mauSo / ucln;

	return a;
}

int uocChungMax(int a, int b) {
	if (a == 0) return b;
	return uocChungMax(b % a, a);
}
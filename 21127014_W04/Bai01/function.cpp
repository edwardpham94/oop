#include"function.h"

PhanSo::PhanSo() {
	tuSo = new int;
	mauSo = new int;
	*tuSo = 0;
	*mauSo = 1;
}

PhanSo::PhanSo(int a) {
	tuSo = new int;
	mauSo = new int;
	if (a != 0) {
		*tuSo = a;
		*mauSo = 1;
	}
	else {
		*tuSo = 0;
		*mauSo = 1;
	}
}

PhanSo::PhanSo(int a, int b) {
	tuSo = new int;
	mauSo = new int;
	if (b != 0) {
		*tuSo = a;
		*mauSo = b;
	}
	else {
		*tuSo = a;
		*mauSo = 1;
	}
}

// copy constructor
PhanSo::PhanSo(const PhanSo& temp) {
	this->tuSo = new int;
	this->mauSo = new int;
	*this->tuSo = *temp.tuSo;
	*this->mauSo = *temp.mauSo;
}

PhanSo::~PhanSo() {
	delete tuSo;
	delete mauSo;
}

PhanSo& PhanSo::operator=(const PhanSo& ps)
{
	if (this == &ps)
		return *this;
	delete tuSo;
	delete mauSo;

	tuSo = new int;
	mauSo = new int;
	*this->tuSo = *ps.tuSo;
	*this->mauSo = *ps.mauSo;
	return *this;
}

PhanSo PhanSo::operator+ (const PhanSo& ps)
{
	PhanSo result;
	*result.tuSo = *this->tuSo * *ps.mauSo + *this->mauSo * *ps.tuSo;
	*result.mauSo = *this->mauSo * *ps.mauSo;
	result.rutGon();
	return result;
}

PhanSo PhanSo::operator- (const PhanSo& ps)
{
	PhanSo result;
	*result.tuSo = *this->tuSo * *ps.mauSo - *this->mauSo * *ps.tuSo;
	*result.mauSo = *this->mauSo * *ps.mauSo;
	result.rutGon();
	return result;
}

PhanSo PhanSo::operator*(const PhanSo& p) {
	PhanSo result;
	*result.tuSo = (*this->tuSo) * (*p.tuSo);
	*result.mauSo = (*this->mauSo) * (*p.mauSo);
	result.rutGon();
	return result;

}

PhanSo PhanSo::operator/(const PhanSo& p) {
	PhanSo result;
	*result.tuSo = *this->tuSo / *p.mauSo;
	*result.mauSo = *this->mauSo / *p.tuSo;
	result.rutGon();
	return result;

}

int PhanSo::getTuSo() {
	return *this->tuSo;
}


int PhanSo::getMauSo() {
	return *this->mauSo;
}

void PhanSo::setTuSo(int a) {
	*this->tuSo = a;
}

void PhanSo::setMauSo(int a) {
	*this->mauSo = a;
}

void PhanSo::inputPhanSo() {
	cout << "\nEnter Phan So :\n";
	cout << "Tu So = ";
	cin >> *this->tuSo;
	cout << "Mau So = ";
	cin >> *this->mauSo;
}

void PhanSo::outputPhanSo() {
	cout << endl << fixed << setprecision(2) << *this->tuSo << "/" << *this->mauSo << " = " << (double)*tuSo / *mauSo;
}

int uocChungMax(int a, int b) {
	if (a == 0) return b;
	return uocChungMax(b % a, a);
}


PhanSo PhanSo::rutGon() {
	int ucln = uocChungMax(*this->tuSo, *this->mauSo);
	*this->tuSo = *this->tuSo / ucln;
	//cout << endl << *this->tuSo;
	*this->mauSo = *this->mauSo / ucln;
	//cout << endl << *this->mauSo;

	return *this;
}



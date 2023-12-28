#include"function.h"


int uocChungMax(int a, int b);

int uocChungMax(int a, int b) {
	if (a == 0) return b;
	return uocChungMax(b % a, a);
}


PhanSo PhanSo::rutGon() {
	int ucln = uocChungMax(*this->tuso, *this->mauso);
	*this->tuso = *this->tuso / ucln;
	*this->mauso = *this->mauso / ucln;

	return *this;
}

PhanSo::PhanSo()
{
	tuso = new int;
	mauso = new int;
	*this->tuso = 0;
	*this->mauso = 1;
}

PhanSo:: PhanSo(int x, int y) {
	tuso = new int;
	mauso = new int;
	*this->tuso = x;
	*this->mauso = y;
}

PhanSo::~PhanSo()
{
	delete tuso;
	delete mauso;
}

PhanSo& PhanSo::operator=(const PhanSo& temp) {
	if (this == &temp)
		return *this;
	delete tuso;
	delete mauso;

	tuso = new int;
	mauso = new int;
	*this->tuso = *temp.tuso;
	*this->mauso = *temp.mauso;
	return *this;
}

PhanSo PhanSo::operator+(const PhanSo& a) {
	PhanSo result;
	*result.tuso = *this->tuso * *a.mauso + *this->mauso * *a.tuso;
	*result.mauso = *this->mauso * *a.mauso;

	return result;
}

PhanSo PhanSo::operator-(const PhanSo& a) {
	PhanSo result;
	*result.tuso = *this->tuso * *a.mauso - *this->mauso * *a.tuso;
	*result.mauso = *this->mauso * *a.mauso;

	return result;
}

PhanSo PhanSo::operator*(const PhanSo& a) {
	PhanSo result;
	*result.tuso = *this->tuso * *a.tuso;
	*result.mauso = *this->mauso * *a.mauso;

	return result;
}

PhanSo PhanSo::operator/(const PhanSo& a) {
	PhanSo result;
	*result.tuso = *this->tuso * *a.mauso;
	*result.mauso = *this->mauso * *a.tuso;

	return result;
}

PhanSo& PhanSo::operator+=(const PhanSo& a) {
	*this->tuso = *this->tuso * *a.mauso + *this->mauso * *a.tuso;
	*this->mauso = *this->mauso * *a.mauso;
	return *this;
}

PhanSo& PhanSo::operator-=(const PhanSo& a) {
	*this->tuso = *this->tuso * *a.mauso - *this->mauso * *a.tuso;
	*this->mauso = *this->mauso * *a.mauso;

	return *this;
}

PhanSo& PhanSo::operator*=(const PhanSo& a) {
	*this->tuso = *this->tuso * *a.tuso;
	*this->mauso = *this->mauso * *a.mauso;

	return *this;
}

PhanSo& PhanSo::operator/=(const PhanSo& a) {
	*this->tuso = *this->tuso * *a.mauso;
	*this->mauso = *this->mauso * *a.tuso;

	return *this;
}

bool PhanSo::operator ==(const PhanSo& a) {
	PhanSo temp;
	*this->tuso = *this->tuso * *a.mauso;

	*temp.tuso = *temp.tuso * *this->mauso;

	if (*this->tuso == *temp.tuso)
		return true;
	return false;
}

bool PhanSo::operator >=(const PhanSo& a){
	PhanSo temp;
	*this->tuso = *this->tuso * *a.mauso;

	*temp.tuso = *temp.tuso * *this->mauso;

	if (*this->tuso > *temp.tuso)
		return true;
	return false;
}

bool PhanSo::operator <=(const PhanSo& a) {
	PhanSo temp;
	*this->tuso = *this->tuso * *a.mauso;

	*temp.tuso = *temp.tuso * *this->mauso;

	if (*this->tuso < *temp.tuso)
		return true;
	return false;
}

bool PhanSo::operator !=(const PhanSo& a) {
	PhanSo temp;
	*this->tuso = *this->tuso * *a.mauso;

	*temp.tuso = *temp.tuso * *this->mauso;

	if (*this->tuso != *temp.tuso)
		return true;
	return false;
}

PhanSo& PhanSo::operator ++() {
	*this->tuso = *this->tuso + *this->mauso;

	return *this;
}

PhanSo PhanSo::operator ++(int x) {
	PhanSo temp = *this;
	++* this;
	return temp;
}


PhanSo& PhanSo::operator --() {
	*this->tuso = *this->tuso - *this->mauso;

	return *this;
}

PhanSo PhanSo::operator --(int x) {
	PhanSo temp;
	temp = *this;
	--*this;

	return temp;
}

istream& operator >>(istream& is, const PhanSo& a) {
	cout << "Tu so  = ";
	is >> *a.tuso;
	cout << "Mau so = ";
	is >> *a.mauso;
	return is;
}

ostream& operator <<(ostream& os, const PhanSo& a) {
	os << *a.tuso << "/" << *a.mauso << endl;
	return os;
}
#include"function.h"

string NhanVien::getName() {
	return this->name;
}

unsigned int NhanVien::getDay() {
	return this->day;
}

float NhanVien::getSalary() {
	return this->salary;
}

string NhanVien::getMaSo() {
	return this->maSo;
}

string NhanVien::getChucDanh() {
	return this->chucDanh;
}


string jobOption(unsigned int day) {

	if (day <= 365) return "Nhan vien";
	else if (day > 365 && day <= 730) return "Quan ly";
	else if (day > 730 && day <= 1430) return "Truong phong";
	else return "Truong phong quan ly";
}

float salaryRate(string job) {
	if (job == "Nhan vien") return 1.0;
	else if (job == "Quan ly") return 1.5;
	else if (job == "Truong phong") return 2.25;
	else return 4.0;
}

void NhanVien::setName(string name) {
	this->name = name;
}

void NhanVien::setDay(unsigned int x) {
	this->day = x;
}

void NhanVien::setMaSo(string maso) {
	this->maSo = maso;
}

void NhanVien::setChucDanh(string str) {
	this->chucDanh = str;
}

void NhanVien::setSalary(float number) {
	this->salary = number;
}

void NhanVien::inputNhanvien() {
	cout << "*** Fill Information ***\n";
	cout << "Enter fullName : ";
	getline(cin, this->name);
	cout << "Enter working day : ";
	cin >> this->day;
	cout << "Enter Ma So : ";
	cin.ignore();
	getline(cin, this->maSo);
	cout << "Enter chuc vu : ";
	getline(cin, this->chucDanh);
	cout << "Enter salary rate : ";
	cin >> this->salary;
}

void NhanVien::outputNhanVien() {
	cout << endl << "***** Infor Nhan Vien *****\n";
	cout << "FullName : " << this->name << endl;
	cout << "Working day : " << this->day << endl;
	cout << "Ma So : " << this->maSo << endl;
	cout << "Chuc vu : " << this->chucDanh << endl;
	cout << "Salary rate : " << this->salary << endl;
	cout << "***************************";
	cout << endl;
}


string createMaSo(string name, unsigned int day) {
	string number;
	number = to_string(day);
	return number + name;
}
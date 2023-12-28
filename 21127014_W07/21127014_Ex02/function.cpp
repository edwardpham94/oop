#include"function.h"

HinhChuNhat::HinhChuNhat() {
	this->canh1 = 4;
	this->canh2 = 6;
}

HinhChuNhat::HinhChuNhat(const HinhChuNhat& temp) {
	this->canh1 = temp.canh1;
	this->canh2 = temp.canh2;
}

float HinhChuNhat::chuViHCN() {
	return (canh1 + canh2) * 2;
}

float HinhChuNhat::dienTichHCN() {
	return canh1 * canh2;
}


HinhVuong::HinhVuong() {
	canh1 = canh2 = 1;
}

HinhVuong::HinhVuong(const HinhVuong& temp) {
	canh1 = this->canh1;
	canh2 = this->canh2;
}

float HinhVuong::chuViHV() {
	return chuViHCN();
}


float HinhVuong::dienTichHV() {
	return dienTichHCN();
}

////////////////////////////////////////////////////////////////

Sach::Sach() {
	name = "ABC";
	isbn = "4234";
	author = "MKS";
	quantity = 10;
	price = 150000;
}

Sach::Sach(const Sach& temp) {
	name = temp.name;
	isbn = temp.isbn;
	author = temp.author;
	quantity = temp.quantity;
	price = temp.price;
}

string Sach::getISBN() {
	return this->isbn;
}

string Sach::getName() {
	return this->name;
}

string Sach::getAuthor() {
	return this->author;
}

int Sach::getQuantity() {
	return this->quantity;
}

double Sach::getPrice() {
	return this->price;
}


void Sach::inputSach() {
	cout << "*** Enter Book Infor ***\n";
	cout << "Enter Name : ";
	getline(cin, name);
	cout << "Enter ISBN : ";
	getline(cin, isbn);
	cout << "Enter Author : ";
	getline(cin, author);
	cout << "Enter Quantity : ";
	cin >> quantity;
	cout << "Enter Price : ";
	cin >> price;
}

void Sach::outputSach() {
	cout << "*** Book Infor ***\n";
	cout << "Name : " << name << endl;
	cout << "ISBN : " << isbn << endl;
	cout << "Author : " << author << endl;
	cout << "Quantity : " << quantity << endl;
	cout << "Price : " << price << endl;
}

ThuVien::ThuVien() {
	Sach book;
	this->listSach.push_back(book);
}

void ThuVien::inputThuVien() {
	int n;
	cout << "\nEnter the number of book : ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		Sach temp;
		temp.inputSach();
		listSach.push_back(temp);
	}
}


void ThuVien::outputThuVien() {
	int n = this->listSach.size();
	for (int i = 0; i < n; i++) {
		cout << "\nBook Infor No." << i + 1 << endl;
		cout << "ISBN : " << this->listSach[i].getISBN() << endl;
		cout << "Name : " << this->listSach[i].getName() << endl;
		cout << "Author : " << this->listSach[i].getAuthor() << endl;
		cout << "Quantity : " << this->listSach[i].getQuantity() << endl;
		cout << "Price : " << this->listSach[i].getPrice() << endl;
	}
}

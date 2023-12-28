#include"function.h"

SanPham::SanPham() {

}

SanPham::~SanPham() {

}

void SanPham::setName(string x) {
	name = x;
}

void SanPham::setType(string x) {
	type = x;
}

void SanPham::setPrice(int x) {
	price = x;
}

void SanPham::setQuantity(int x) {
	quantity = x;
}

string SanPham::getName() {
	return name;
}

string SanPham::getType() {
	return type;
}

int SanPham::getPrice() {
	return price;
}

int SanPham::getQuantity() {
	return quantity;
}

void SanPham::outputSanPham() {
	cout << "\tTen San Pham          : " << name << endl;
	cout << "\tLoai San Pham         : " << type << endl;
	cout << "\tGia San Pham          : " << price << endl;
	cout << "\tSo luong San Pham     : " << quantity << endl;
}
void SanPham::inputSanPham() {
	cout << "Nhap Ten San Pham          : ";
	getline(cin, name);
	cout << "Nhap Loai San Pham         : ";
	getline(cin, type);
	cout << "Nhap Gia San Pham          : ";
	cin >> price;
	cout << "Nhap So luong San Pham     : ";
	cin >> quantity;
}
void SanPham::updateQuantity() {
	quantity -= 1;
}
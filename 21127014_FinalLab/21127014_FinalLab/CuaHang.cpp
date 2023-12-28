#include"function.h"


CuaHang::CuaHang() {

}
CuaHang::~CuaHang() {

}
void CuaHang::readSanPham() {
	fstream fin;
	cout << "aaa";
	fin.open("SanPham.txt", ios::in);
	if (fin.is_open()) {
		while (!fin.eof()) {
			SanPham temp;
			string newName, newType;
			int newPrice, newQuantity;
			getline(fin, newName);
			getline(fin, newType);
			fin >> newPrice;
			fin >> newQuantity;
			fin.ignore();
			temp.setName(newName);
			temp.setType(newType);
			temp.setPrice(newPrice);
			temp.setQuantity(newQuantity);
			listSP.push_back(temp);
		}
	}
	else cout << "ERROR";
	fin.close();
}

void CuaHang::outputSanPham() {
	cout << "\n***** CAC SAN PHAM *****\n";
	for (int i = 0; i < listSP.size(); i++) {
		cout << "\nSanPham No." << i + 1 << endl;
		cout << "Ten San Pham          : " << listSP[i].getName() << endl;
		cout << "Loai San Pham         : " << listSP[i].getType() << endl;
		cout << "Gia San Pham          : " << listSP[i].getPrice() << endl;
		cout << "So luong San Pham     : " << listSP[i].getQuantity() << endl;
	}
}

void CuaHang::inputSanPham() {
	int n;
	cout << "\nNhap so luong san pham can them vao : ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "\nNhap san pham No." << i + 1 << endl;
		SanPham temp;
		string newName, newType;
		int newPrice, newQuantity;
		cout << "\nNhap Ten San Pham          : ";
		getline(cin, newName);
		cout << "Nhap Loai San Pham           : ";
		getline(cin, newType);
		cout << "Nhap Gia San Pham            : ";
		cin >> newPrice;
		cout << "Nhap So Luong San Pham       : ";
		cin >> newQuantity;
		cin.ignore();
		temp.setName(newName);
		temp.setType(newType);
		temp.setPrice(newPrice);
		temp.setQuantity(newQuantity);
		listSP.push_back(temp);
	}


	fstream fout;
	fout.open("SanPham.txt", ios::out);
	if (fout.is_open()) {
		cout << "File is open to write";
		for (int i = 0; i < listSP.size(); i++) {
			fout << listSP[i].getName() << endl;
			fout << listSP[i].getType() << endl;
			fout << listSP[i].getPrice() << endl;
			fout << listSP[i].getQuantity() << endl;
		}
	}
	else {
		cout << "Fail";
	}
	fout.close();
}

void CuaHang::setName(string x) {
	name = x;
}

void CuaHang::setdateStart(string x) {
	dateStart = x;
}

void CuaHang::setListSP(SanPham x) {
	listSP.push_back(x);
}
void CuaHang::setListSP1(vector<SanPham> x) {
	listSP.clear();
	listSP = x;
}
string CuaHang::getName() {
	return name;
}

string CuaHang::getDate() {
	return dateStart;
}

void CuaHang::getListSP() {
	cout << "San Pham Cua Cua Hang : ";
	for (int i = 0; i < listSP.size(); i++) {
		cout << "\n\tSan pham so " << i + 1 << " : " << endl;
		listSP[i].outputSanPham();
	}
}
vector<SanPham> CuaHang::getListSP1() {
	return listSP;
}

void CuaHang::removeSanPham(string name) {
	for (int i = 0; i < listSP.size(); i++) {
		if (listSP[i].getName() == name) {
			listSP.erase(listSP.begin() + i);
			cout << "\nRemove Successfull\n";
		}
	}
}
SanPham CuaHang::addVaoGioHang(string name) {
	SanPham result;
	for (int i = 0; i < listSP.size(); i++) {
		if (listSP[i].getName() == name) {
			result = listSP[i];
			result.setQuantity(1);
			listSP[i].updateQuantity();
			cout << "\nAdded sucessfull\n";
		}
	}
	return result;
}
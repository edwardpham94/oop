#include<iostream>
#include<vector>
#include<string>
using namespace std;

class HinhChuNhat {
protected:
	float canh1, canh2;
public:
	HinhChuNhat();
	HinhChuNhat(const HinhChuNhat& temp);
	float chuViHCN();
	float dienTichHCN();
};


class HinhVuong : public HinhChuNhat {
protected:

public:
	HinhVuong();
	HinhVuong(const HinhVuong& temp);
	float chuViHV();
	float dienTichHV();
};

/////////////////////////////////////////////////////////////////////////////


class Sach {
protected:
	string isbn;
	string name;
	string author;
	int quantity;
	double price;
public:
	Sach();
	Sach(const Sach& temp);
	void inputSach();
	void outputSach();
	string getISBN();
	string getName();
	string getAuthor();
	int getQuantity();
	double getPrice();
};



class ThuVien {
protected:
	vector<Sach> listSach;
public:
	ThuVien();
	void inputThuVien();
	void outputThuVien();

};


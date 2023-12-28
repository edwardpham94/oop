#include"function.h"



DanhMucHangHoa::DanhMucHangHoa() {
	name = "";
}

DanhMucHangHoa::~DanhMucHangHoa() {}

void DanhMucHangHoa::addDanhMucHangHoa(DanhMucHangHoa* p) {}

void DanhMucHangHoa::removeDanhMucHangHoa(DanhMucHangHoa* p) {}

istream& operator>>(istream& is, DanhMucHangHoa* p) {
	p->input();
	return is;
}

ostream& operator<<(ostream& os, DanhMucHangHoa* p) {
	p->output();
	return os;
}

composite::composite() : DanhMucHangHoa() {}

bool DanhMucHangHoa::operator==(const DanhMucHangHoa& p) {
	if (p.name == name)
		return 1;
	return 0;
}

composite::~composite() {
	for (int i = 0; i < folder.size(); i++)
		delete folder[i];
	folder.clear();
}

string composite::getName() {
	string k = name;
	for (int i = 0; i < folder.size(); i++)
		k = k + " / " + folder[i]->getName();
	return k;
}

void composite::addDanhMucHangHoa(DanhMucHangHoa* p) {
	folder.push_back(p);
}

void composite::removeDanhMucHangHoa(DanhMucHangHoa* p) {
	for (int i = 0; i < folder.size(); i++) {
		if (p == folder[i])
			folder.erase(folder.begin() + i);
	}
}

void composite::input() {
	cout << "Nhap Ten Danh Muc Hang Hoa :  "; 
	cin >> name;
}

void composite::output() {
	cout << "Ten Danh Muc Hang Hoa :  " << name << endl;
}

leaf::leaf() :DanhMucHangHoa() {}

leaf::~leaf() {}

string leaf::getName() {
	return name;
}


void leaf::input() {
	cout << "Nhap Ten Danh Muc Hang Hoa :  ";
	cin >> name;
}

void leaf::output() {
	cout << "Ten Danh Muc Hang Hoa :  " << name << endl;
}
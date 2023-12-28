#include"function.h"
KhachHang::KhachHang() {}
KhachHang::~KhachHang(){}
void KhachHang::setName(string x) {
	name = x;
}

void KhachHang::setEmail(string x) {
	email = x;
}

void KhachHang::setPassword(string x) {
	password = x;
}

void KhachHang::setAddress(string x) {
	address = x;
}

void KhachHang::setSex(string x) {
	sex = x;
}
void KhachHang::setBirthday(int x, int y, int z) {
	birthday.setDate(x, y, z);
}
void KhachHang::setGioHang(SanPham x) {
	gioHang.push_back(x);
}
void KhachHang::setDonHang(DonHang x) {
	donHang.push_back(x);
}
string KhachHang::getEmail() {
	return email;
}
string KhachHang::getPassword() {
	return password;
}
string KhachHang::getName() {
	return name;
}
string KhachHang::getAddress() {
	return address;
}
string KhachHang::getSex() {
	return sex;
}
int KhachHang::getNgay() {
	return birthday.getNgay();
}
int KhachHang::getThang() {
	return birthday.getThang();
}
int KhachHang::getNam() {
	return birthday.getNam();
}
vector<SanPham> KhachHang::getGioHang() {
	return gioHang;
}
vector<DonHang> KhachHang::getDonHang() {
	return donHang;
}
void KhachHang::updateGioHang() {
	gioHang.clear();
}
void KhachHang::setLevel(int x) {
	if (x < 10000000) level = "Thuong";
	else if (x >= 10000000) level = "Dong";
	else if (x >= 50000000) level = "Bac";
	else if (x >= 200000000) level = "Vang";
}
float KhachHang::decreaseRate() {
	if (level == "Thuong") return 1.0;
	else if (level == "Dong") return 0.01;
	else if (level == "Bac") return 0.02;
	else if (level == "Vang") return 0.04;
}
string KhachHang::getLevel() {
	return level;
}
void KhachHang::setDongXu(int x) {
	tienXu = x;
}
int KhachHang::getDongXu() {
	return tienXu;
}
void KhachHang::updateDongXu() {
	tienXu += 100;
}
void KhachHang::outputKhachHang() {
	cout << "Ten Khach Hang          : " << name << endl;
	cout << "MK Khach Hang           : " << password << endl;
	cout << "Email Khach Hang        : " << email << endl;
	cout << "Dia Chi Khach Hang      : " << address << endl;
	cout << "Gioi Tinh Khach Hang    : " << sex << endl;
	cout << "Sinh Nhat Khach Hang    : ";
	birthday.getDate();
	cout << endl;
	cout << "Tien Xu                 : " << tienXu << endl;
	cout << "Gio Hang Cua Khach Hang : " << endl;
	for (int i = 0; i < gioHang.size(); i++) {
		cout << "\tSan pham So " << i + 1 << " : \n";
		gioHang[i].outputSanPham();
		cout << endl;
	}
	cout << "Don Hang Cua Khach Hang : " << endl;
	for (int i = 0; i < donHang.size(); i++) {
		cout << "\tDon Hang So " << i + 1 << " : \n";
		donHang[i].outputDonHang();
	}
	cout << endl;
}

void KhachHang::removeSanPhamKhoiGioHang(string name) {
	for (int i = 0; i < gioHang.size(); i++) {
		if (gioHang[i].getName() == name) {
			gioHang.erase(gioHang.begin() + i);
			cout << "\nRemove sucessfull\n";
		}
	}
}

int KhachHang::getTongChiTieu() {
	int sum = 0;
	for (int i = 0; i < donHang.size(); i++) {
		sum += donHang[i].getTongThanhToan();
	}
	return sum;
}
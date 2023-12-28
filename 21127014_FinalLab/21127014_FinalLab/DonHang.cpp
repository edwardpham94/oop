#include"function.h"
DonHang::DonHang() {

}
DonHang::~DonHang() {

}
void DonHang::setID(string x) {
	ID = x;
}
void DonHang::setListSP(SanPham x) {
	listSP.push_back(x);
}
void DonHang::setQuantity(int x) {
	quantity = x;
}
void DonHang::setTongDonHang(int x) {
	tongDonHang = x;
}
void DonHang::setTongThanhToan(int x) {
	tongThanhToan = x;
}
void DonHang::setdateBooked(int x, int y, int z) {
	dateBooked.setDate(x, y, z);
}
string DonHang::getID() {
	return ID;
}
vector<SanPham> DonHang::getListSP() {
	return listSP;
}
int DonHang::getQuantity() {
	return quantity;
}
int DonHang::getTongDonHang() {
	return tongDonHang;
}
int DonHang::getTongThanhToan() {
	return tongThanhToan;
}
int DonHang::getNgay() {
	return dateBooked.getNgay();
}
int DonHang::getThang() {
	return dateBooked.getThang();
}
int DonHang::getNam() {
	return dateBooked.getNam();
}
void DonHang::outputDonHang() {
	cout << "\tID Don Hang              : " << ID << endl;
	for (int i = 0; i < listSP.size(); i++) {
		cout << "\n\tSan Pham So " << i + 1 << " : " << endl;
		listSP[i].outputSanPham();
	}
	cout << "\tTong So Luong Don Hang   : " << quantity << endl;
	cout << "\tTong Tien Hang Don Hang  : " << tongDonHang << endl;
	cout << "\tTong Thanh Toan Don Hang : " << tongThanhToan << endl;
	cout << "\tNgay Dat Don Hang        : ";
	dateBooked.getDate();

}
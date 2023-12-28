#include"function.h"
vector<PhongQuanLy*> PhongQuanLy::DoiTuongMau;

void main() {
	PhongQuanLy::ThemDoiTuongMau(new GiangVien);
	PhongQuanLy::ThemDoiTuongMau(new TroGiang);
	PhongQuanLy::ThemDoiTuongMau(new NghienCuuVien);
	PhongQuanLy::ThemDoiTuongMau(new ChuyenVien);
	vector<PhongQuanLy*> TongPhongQuanLy;

	int n;
	cout << "Enter the number of staff to input  : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap ten nhan su de them vao danh sach: ";
		string tenLoaiDV;
		cin >> tenLoaiDV;
		cin.ignore();
		PhongQuanLy* ns = PhongQuanLy::TaoDoiTuongTheoTen(tenLoaiDV);
		ns->input();
		if (ns != NULL)
			TongPhongQuanLy.push_back(ns);
	}

	cout << "\nTong so nhan su la: " << TongPhongQuanLy.size() << endl;

	int sum = 0;
	for (int i = 0; i < TongPhongQuanLy.size(); i++) {
		cout << TongPhongQuanLy[i]->LayTenDoiTuong() << endl;
		TongPhongQuanLy[i]->output();
		cout << "\nSalary : " << TongPhongQuanLy[i]->salary();
		sum += TongPhongQuanLy[i]->salary();
	}
	cout << "\nTong so tien luong nhan su la  : " << sum;

	for (int i = 0; i < TongPhongQuanLy.size(); i++)
		delete TongPhongQuanLy[i];
}
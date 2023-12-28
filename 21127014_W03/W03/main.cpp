#include"function.h"

int main() {
	NhanVien a("Bao Pham", 2000);
	// getter
	cout << a.getName() << endl;
	cout << a.getDay() << endl;
	cout << a.getMaSo() << endl;
	cout << a.getChucDanh() << endl;
	cout << a.getSalary() << endl;
	// setter
	a.setName("Bao Pham");
	a.setDay(255);
	a.setMaSo("225Bao Pham");
	a.setChucDanh("Nhan vien");
	a.setSalary(1.0);

	NhanVien b("NguyenVanC", 500, "500NguyenVanC", "Quan ly", 2.25);

	a.inputNhanvien();
	a.outputNhanVien();
}

//void main()
//{
//	NhanVien c;
//	c.outputNhanVien();
//	NhanVien a("Dat Thanh", 800);
//	NhanVien b(a);
//	b.outputNhanVien();
//
//	b.setName("Hai Dang");
//	b.outputNhanVien();
//	for (int i = 0; i < 5; i++)
//	{
//		NhanVien clone = b;
//		clone.setName("De tu thu " + to_string(i) + " cua "
//			+ b.getChucDanh() + " " + b.getName());
//		cout << clone.getName() << endl;
//	}
//}


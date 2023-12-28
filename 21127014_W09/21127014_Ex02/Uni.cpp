#include"function.h"

Person::Person() {
	this->name = "Bao Pham";
	this->birthday = "09/04/2003";
	this->id = "21127014";
}

Person::Person(string name, string birthday, string id) {
	this->name = "Bao Pham";
	this->birthday = "09/04/2003";
	this->id = "21127014";
}

Person::Person(const Person& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
}

void Person::input() {

}

void Person::output() {
	return;
}


int getOption(string name) {
	if (name == "GiangVien") return 1;
	else if (name == "TroGiang") return 2;
	else if (name == "NghienCuuVien") return 3;
	else if (name == "ChuyenVien") return 4;
	else return 5;
}


void Uni::inputStaff() {
	int opt = 0;
	cout << "Nhap so luong nhan su can them vao :";
	cin >> opt;
	cin.ignore();
	for (int i = 0; i < opt; i++) {
		string NhanSu;
		cout << "\nNhap chuc vu nhan su can them vao : ";
		getline(cin, NhanSu);
		switch (getOption(NhanSu))
		{
			case 1:
			{
				Person* a = new GiangVien;
				a->input();
				listStaff.push_back(a);
				break;
			}
			case 2:
			{
				Person* a = new TroGiang;
				a->input();
				listStaff.push_back(a);
				break;
			}
			case 3:
			{
				Person* a = new NghienCuuVien;
				a->input();
				listStaff.push_back(a);
				break;
			}
			case 4:
			{
				Person* a = new ChuyenVien;
				a->input();
				listStaff.push_back(a);
				break;
			}
			case 5:
				return;
		}
	}
	
}

void Uni::outputStaff() {
	for (int i = 0; i < listStaff.size(); i++) {
		listStaff[i]->output();
	}
}

double Uni::uniSalary() {
	double sum = 0;
	for (int i = 0; i < listStaff.size(); i++) {
		sum += listStaff[i]->salary();
	}
	return sum;
}

double Uni::maxSalary() {
	int max = 0;
	for (int i = 0; i < listStaff.size(); i++) {
		if (listStaff[i]->salary() > max) max = listStaff[i]->salary();
	}
	return max;
}
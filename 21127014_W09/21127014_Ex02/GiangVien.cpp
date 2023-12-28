#include"function.h"

GiangVien::GiangVien() {
	this->name = "Pham Hong Gia Bao";
	this->birthday = "09/04/2003";
	this->id = "21127014";
	this->hocHam = "Giao su";
	this->hocVi = "Tien si";
	this->yearTeaching = 25;
	vector<string> listSub = { "TTH", "DSTT", "OOP", "Java" };
	this->listSub = listSub;
}

GiangVien::GiangVien(string name1, string birthday1, string id1, string hocHam1, string hocVi1, int yearTeaching1, vector<string> listSub) {
	this->name = name1;
	this->birthday = birthday1;
	this->id = id1;
	this->hocHam = hocHam1;
	this->hocVi = hocVi1;
	this->yearTeaching = yearTeaching1;
	this->listSub = listSub;
}

GiangVien::GiangVien(const GiangVien& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
	this->hocHam = temp.hocHam;
	this->hocVi = temp.hocVi;
	this->yearTeaching = temp.yearTeaching;
	this->listSub = temp.listSub;
}

void GiangVien::input() {
	cout << "\n*** Ennter the GiangVien Infor ***\n";
	cout << "Enter the Name : ";
	getline(cin, this->name);
	cout << "Enter the Birthday : ";
	getline(cin, this->birthday);
	cout << "Enter the Id : ";
	getline(cin, this->id);
	cout << "Enter the Hoc Ham : ";
	getline(cin, this->hocHam);
	cout << "Enter the Hoc vi : ";
	getline(cin, this->hocVi);
	cout << "Enter the YearTeaching : ";
	cin >> this->yearTeaching;
	int n;
	cout << "Enter the number of Subject : ";
	cin >> n;
	cin.ignore();
	this->listSub.clear();
	for (int i = 0; i < n; i++) {
		string subName;
		cout << "Enter Subject No." << i + 1 << " : ";
		getline(cin, subName);
		this->listSub.push_back(subName);
	}
}

void GiangVien::output() {
	cout << "\n*** The GiangVien Infor ***\n";
	cout << "Name : " << name << endl;
	cout << "Birthday : " << birthday << endl;
	cout << "Id : " << id << endl;
	cout << "Hoc Ham : " << hocHam << endl;
	cout << "The Hoc vi : " << hocVi << endl;
	cout << "YearTeaching : " << yearTeaching << endl;
	int n = listSub.size();
	cout << "List of Subject : \n";
	for (int i = 0; i < n; i++) {
		cout << "\tSubject No." << i + 1 << " : " << listSub[i] << endl;
	}
}

double GiangVien::salary() {
	return this->listSub.size() * this->yearTeaching * 0.12 * 20000;
}
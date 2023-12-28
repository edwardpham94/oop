#include"function.h"


Person::Person(string name, string birth, string id) {
	this->name = name;
	this->birth = birth;
	this->id = id;
}
//
//GiangVien::GiangVien(string hocHam, string hocVi, int yearTeaching, vector<string> listSub) {
//	this->hocHam = hocHam;
//	this->hocVi = hocVi;
//	this->yearTeaching = yearTeaching;
//	this->listSub = listSub;
//}

//bool firstLetterD(string name) {
//	char first = name[0];
//	if (first == 'D') return true;
//	return false;
//}
//
//int NghienCuuVien::getResearchD() {
//	int count = 0;
//	int n = 0;
//	n = this->IdWorked.size();
//	for (int i = 0; i < n; i++) {
//		if (firstLetterD(this->IdWorked[i]))
//			count++;
//	}
//	return count;
//}
//
//bool firstLetterT(string name) {
//	char first = name[0];
//	if (first == 'T') return true;
//	return false;
//}
//
//int ChuyenVien::getResearchT() {
//	int count = 0;
//	int n = 0;
//	n = this->IdWorked.size();
//	for (int i = 0; i < n; i++) {
//		if (firstLetterT(this->IdWorked[i]))
//			count++;
//	}
//	return count;
//}

//////////////////////////////////// salary

double Person::countSalary() {
	return 0;
}

double GiangVien::countSalary() {
	return this->yearTeaching * this->listSub.size() * 0.12 * 20000;
}

double TroGiang::countSalary() {
	return this->listSub.size() * 0.3 * 18000;
}

//long NghienCuuVien::countSalary() {
//	return (long)(yearExp * 2 + this->getResearchD()) * 20000;
//}
//
//long ChuyenVien::countSalary() {
//	return (long)(yearExp * 4 + this->getResearchT()) * 18000;
//}

//void Person::inputInfor() {
//	cout << "\n*** Enter Person Infor ***\n";
//	cout << "Enter the Name : ";
//	getline(cin, this->name);
//	cout << "Enter the Birthday : ";
//	getline(cin, this->birth);
//	cout << "Enter the ID : ";
//	getline(cin, this->id);
//
//	cout << this->name << endl;
//	cout << this->birth << endl;
//	cout << this->id << endl;
//}
//
//void GiangVien::inputInfor() {
//	cout << "\n*** Enter GiangVien Infor ***\n";
//	cout << "Enter the HocHam : ";
//	getline(cin, this->hocHam);
//	cout << "Enter the HocVi : ";
//	getline(cin, this->hocVi);
//	cout << "Enter the YearTeaching : ";
//	cin >> this->yearTeaching;
//}
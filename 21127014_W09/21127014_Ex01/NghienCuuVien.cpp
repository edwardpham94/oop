#include"function.h"


NghienCuuVien::NghienCuuVien() {
	name = "A";
	birthday = "B";
	id = "C";
	this->yearResearching = 0;
	vector<string> list2 = { "T140", "D748", "O4512", "J741" };
	this->listNghienCuu = list2;
}

NghienCuuVien::NghienCuuVien(const NghienCuuVien& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
	this->yearResearching = temp.yearResearching;
	this->listNghienCuu = temp.listNghienCuu;
}

void NghienCuuVien::input() {
	cout << "\n*** Ennter the NghienCuuVien Infor ***\n";
	cout << "Enter the Name : ";
	getline(cin, this->name);
	cout << "Enter the Birthday : ";
	getline(cin, this->birthday);
	cout << "Enter the Id : ";
	getline(cin, this->id);
	cout << "Enter the Year Working : ";
	cin >> this->yearResearching;

	int n;
	this->listNghienCuu.clear();
	cout << "Enter the number of Du an NghienCuu : ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string subName;
		cout << "Enter DANC No." << i + 1 << " : ";
		getline(cin, subName);
		this->listNghienCuu.push_back(subName);
	}
}

void NghienCuuVien::output() {
	cout << "\n*** NghienCuuVien Infor ***\n";
	cout << "Name : " << name << endl;
	cout << "Birthday : " << birthday << endl;
	cout << "Id : " << id << endl;
	cout << "Year Working : " << this->yearResearching << endl;
	cout << "Research that taken : \n";
	int n = this->listNghienCuu.size();
	for (int i = 0; i < n; i++) {
		cout << "\tNo." << i + 1 << " : " << this->listNghienCuu[i] << endl;
	}
}

bool isCharacterT(string temp) {
	if (temp[0] == 'T') return true;
	return false;
}

bool isCharacterD(string temp) {
	if (temp[0] == 'D') return true;
	return false;
}

int NghienCuuVien::researchWithD() {
	int count = 0;
	int n = this->listNghienCuu.size();
	for (int i = 0; i < n; i++) {
		if (isCharacterT(this->listNghienCuu[i]))
			count++;
	}
	return count;
}

double NghienCuuVien::salary() {
	return (this->yearResearching * 2 + this->researchWithD()) * 20000;
}


string NghienCuuVien::LayTenDoiTuong() {
	return "NghienCuuVien";
}
#include"function.h"

int ChuyenVien::researchWithT() {
	int count = 0;
	int n = this->listGiaoDuc.size();
	for (int i = 0; i < n; i++) {
		if (isCharacterT(this->listGiaoDuc[i]))
			count++;
	}
	return count;
}

ChuyenVien::ChuyenVien() {
	Person();
	this->yearWorking = 0;
	vector<string> list2 = { "r140", "E548", "Z4512", "A741" };
	this->listGiaoDuc = list2;
}

void ChuyenVien::input() {
	cout << "\n*** Enter the ChuyenVien Infor ***\n";
	cout << "Enter the Name : ";
	getline(cin, this->name);
	cout << "Enter the Birthday : ";
	getline(cin, this->birthday);
	cout << "Enter the Id : ";
	getline(cin, this->id);
	cout << "Enter the Year Working : ";
	cin >> this->yearWorking;

	int n;
	this->listGiaoDuc.clear();
	cout << "Enter the number of Du an NghienCuu : ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string subName;
		cout << "Enter DAGD No." << i + 1 << " : ";
		getline(cin, subName);
		this->listGiaoDuc.push_back(subName);
	}
}


void ChuyenVien::output() {
	cout << "\n*** NghienCuuVien Infor ***\n";
	cout << "Name : " << name << endl;
	cout << "Birthday : " << birthday << endl;
	cout << "Id : " << id << endl;
	cout << "Year Working : " << this->yearWorking << endl;

	int n = this->listGiaoDuc.size();
	cout << "List Du An Giao Duc : ";
	for (int i = 0; i < n; i++) {
		cout << "\tNo." << i + 1 << " : " << this->listGiaoDuc[i] << endl;
	}
}

double ChuyenVien::salary() {
	return this->yearWorking * researchWithT() * 18000;
}

#include"function.h"

void HocSinh::getValue(string str1, string str2, float number) {
	this->name = str1;
	this->phoneNumber = str2;
	this->score = number;
}

string HocSinh::getName() {
	return this->name;
}

string HocSinh::getPhoneNumber() {
	return this->phoneNumber;
}

float HocSinh::getScore() {
	return this->score;
}


void HocSinh::inputHocSinh() {
	cout << "Enter your name : ";
	getline(cin, this->name);
	while (checkName(this->name) == false) {
		cout << "Unvalid! Enter your name again : ";
		getline(cin, this->name);
	}

	cout << "Enter your phone number : ";
	getline(cin, this->phoneNumber);
	while (checkPhoneNumber(this->phoneNumber) == false) {
		cout << "Unvalid! Enter your phone number agian : ";
		getline(cin, this->phoneNumber);
	}

	cout << "Enter your score : ";
	cin >> this->score;
	while (checkScore(this->score) == false) {
		cout << "Unvalid! Enter your score agian : ";
		cin >> this->score;
	}
}

bool checkName(string str) {
	int length = str.length();
	if (length > 20) {
		return 0;
	}

	for (int i = 0; i < length; i++) {
		if (((str[i] >= 0 && str[i] <= 64) 
			&& str[i] != 32) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 
				&& str[i] <= 127)) return 0;
	}
	return 1;
}

bool checkPhoneNumber(string str) {
	int length = str.length();
	if (length > 11 && length < 9) {
		return false;
	}
	else {
		for (int i = 0; i < length; i++) {
			if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 127))
				return false;
		}
	}
	return true;
}

bool checkScore(float a) {
	if (a < 0 && a>10) return false;
	return true;

}

void HocSinh::ouputHocSinh() {
	cout << "\nStudent Information\n";
	cout << "Full name : " << this->name << endl;
	cout << "Phone number : " << this->phoneNumber << endl;
	cout << "Score : " << this->score << endl;
}



void LopHoc::addNewStudent() {
	HocSinh a;
	a.inputHocSinh();

	int n = this->student.size();

	for (int i = 0; i < n; i++) {
		if (this->student[i].getName() == a.getName()) {
			cout << endl << "--- Da co hoc sinh trong lop! ---\n";
			return;
		}
	}

	 this->student.push_back(a);
	cout << endl << "--- Successfully added! ---\n";
}

void LopHoc::deleteAStudent() {
	string deleteName;
	cout << endl << "Enter student's name needed to delete : ";
	cin.ignore();
	getline(cin, deleteName);

	int n = this->student.size();

	for (int i = 0; i < n; i++) {
		if (deleteName == this->student[i].getName()) {
			this->student.erase(this->student.begin() + i);
			cout << endl << "--- Da co hoc sinh trong lop! ---\n";
			return;
		}
	}

	cout << "--- Khong co hoc sinh can xoa! ---" << endl;

}

void LopHoc::outputList() {
	cout << endl << "*** List Of Student ***\n";
	int n = this->student.size();
	for (int i = 0; i < n; i++) {
		cout << "\nStudent No." << i + 1 << endl;
		cout << "Fullname : " << this->student[i].getName() << endl;
		cout << "Phone number : " << this->student[i].getPhoneNumber() << endl;
		cout << "Score : " << this->student[i].getScore() << endl;
		cout << endl;
	}
}

void LopHoc::inputDataFile() {
	ifstream fin;
	int temp = 0;
	fin.open("LopHoc.txt", ios::in);
	if (!fin.fail()) {
		fin >> temp;
		for (int i = 0; i < temp; i++) {
			HocSinh a;
			string strName, strPhoneNumber;
			float mark;
			fin.ignore();
			getline(fin, strName);
			getline(fin, strPhoneNumber);
			fin >> mark;
			a.getValue(strName, strPhoneNumber, mark);
			this->student.push_back(a);
		}
	}
}

void LopHoc::sortDesending() {
	int n = this->student.size();

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (this->student[i].getScore() < this->student[j].getScore()) {
				HocSinh ptem = this->student[i];
				this->student[i] = this->student[j];
				this->student[j] = ptem;
			}
		}
	}
}
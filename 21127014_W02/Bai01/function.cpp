#include"function.h"

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
		if (((str[i] >= 0 && str[i] <= 64) && str[i] != 32) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 127)) return 0;
	}
	return 1;
}


bool checkPhoneNumber(string str) {
	int length = str.length();
	if (length > 11 && length<9) {
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

#include"function.h"

TroGiang::TroGiang(const TroGiang& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
	this->monTroGiang = temp.monTroGiang;
}

void TroGiang::input() {
	cout << "\n*** Enter the TroGiang Infor ***\n";
	cout << "Enter the Name : ";
	getline(cin, this->name);
	cout << "Enter the Birthday : ";
	getline(cin, this->birthday);
	cout << "Enter the Id : ";
	getline(cin, this->id);
	cout << "Enter the Mon Thinh Giang : ";
	cin >> this->monTroGiang;
}

TroGiang::TroGiang() {
	Person();
	this->monTroGiang = 0;
}

void TroGiang::output() {
	cout << "\n*** The TroGiang Infor ***\n";
	cout << "Name : " << name << endl;
	cout << "Birthday : " << birthday << endl;
	cout << "Id : " << id << endl;
	cout << "Mon tro giang : " << this->monTroGiang;
}

double TroGiang::salary() {
	return this->monTroGiang * 0.3 * 18000;
}

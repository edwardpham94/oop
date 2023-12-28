#include"function.h"

void Account::setName(string newname) {
	name = newname;
}
void Account::setPassword(string pass) {
	password = pass;
}

string Account::getName() {
	return name;
}

string Account::getPassword() {
	return password;
}

string Account::getVip() {
	return vip;
}

void Account::setVip(string vip) {
	this->vip = vip;
}

void Account::writeData() {
	fstream fout;
	fout.open("account.txt", ios::ate || ios::out);
	if (fout.is_open()) {
		fout << this->name;
		fout << this->password;
		fout << this->vip;
	}
	else {
		cout << "Fail";
	}
	fout.close();
}

void Account::suggestSong() {
	if (this->vip == "No")
		return;
	cout << "\n*** Songs Recommended ***\n";
}

bool Account::checkLogin() {
	vector<Account> user;

	for (int i = 0; i < user.size(); i++) {
		if (this->name == user[i].name && this->password == user[i].password)
			return true;
	}
	return false;
}

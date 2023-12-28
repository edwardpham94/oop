#include"function.h"


void App::top5Song() {
	for (int i = 0; i < listSong.size() - 1; i++) {
		for (int j = i + 1; j < listSong.size(); j++) {
			if (listSong[i].getLuotNghe() < listSong[j].getLuotNghe()) {
				Song temp = listSong[i];
				listSong[i] = listSong[j];
				listSong[j] = temp;
			}
		}
	}
	cout << "\n*** TOP 5 SONGS ***\n";
	for (int i = 0; i < 5; i++) {
		cout << "No." << i + 1 << "\t " << listSong[i].getName() << endl;
	}
}

void App::signUp() {
	Account newAcc;
	string newName, newPass, newVip;
	cout << "\n***** SIGN UP *****\n";
	cout << "Enter User Name : ";
	getline(cin, newName);
	cout << "Enter Password : ";
	getline(cin, newPass);
	cout << "Register to VIP Account (Yes/No): ";
	getline(cin, newVip);
	while (validPass(newPass) == false) {
		cout << "\nYour Password is UnValid!\nEnter Password Again : ";
		getline(cin, newPass);
		validPass(newPass);
	}
	newAcc.setName(newName);
	newAcc.setPassword(newPass);
	newAcc.setVip(newVip);
	newAcc.writeData();
}

void App::logIn() {
	vector<Account> user;
	Account newAcc;
	string newName, newPass, newVip;
	cout << "\n***** SIGN UP *****\n";
	cout << "Enter User Name : ";
	getline(cin, newName);
	cout << "Enter Password : ";
	getline(cin, newPass);

	if (newAcc.checkLogin()) {
		cout << "***** LOG IN SUCCESSFUL *****\n";
	}
	else {
		cout << "\nLOGIN UNSUCCESSFULLY!\nEnter your Account Again!\n";
		cout << "Enter User Name : ";
		getline(cin, newName);
		cout << "Enter Password : ";
		getline(cin, newPass);
	}
}

App::App() {
	//fstream fin;
	//fin.open("account.txt", ios::in);
	//if (fin.is_open()) {
	//	while (!fin.eof()) {
	//		Account temp;
	//		string newName, newPass, newVip;
	//		getline(fin, newName);
	//		getline(fin, newPass);
	//		getline(fin, newVip);
	//		temp.setName(newName);
	//		temp.setPassword(newPass);
	//		temp.setVip(newVip);
	//		listUser.push_back(temp);
	//	}
	//}
	//else cout << "ERROR";
	//fin.close();
}

void App::outputUser() {
	for (int i = 0; i < listUser.size(); i++) {
		cout << "User No." << i + 1 << endl;
		cout << "Name : " << listUser[i].getName() << endl;
		cout << "Pass : " << listUser[i].getPassword() << endl;
		cout << "Vip : " << listUser[i].getVip() << endl;
	}
}
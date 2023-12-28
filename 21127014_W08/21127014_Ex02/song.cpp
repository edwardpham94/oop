#include"function.h"

void Song::inputSong() {
	cout << "\n*** Fill Song Information ***\n";
	cout << "Enter the Name : ";
	getline(cin, name);
	cout << "Enter the Lyric : ";
	getline(cin, lyric);
	cout << "Enter the Composer : ";
	getline(cin, composer);
	cout << "Enter the Year Published : ";
	getline(cin, year);
	cout << "Enter the Country : ";
	getline(cin, country);
	cout << "Enter the LuotNghe : ";
	cin >> luotnghe;
	cout << "Enter the Authorization (1/0) : ";
	cin >> authorized;
	cout << "Enter the Price : ";
	cin >> price;
}

void Song::outputSong() {
	cout << "\n*** Song Information ***\n";
	cout << "Name : " << name << endl;
	cout << "Lyric : " << lyric << endl;
	cout << "Composer : " << composer << endl;
	cout << "Year Published : " << year << endl;
	cout << "Country : " << country << endl;
	cout << "LuotNghe : " << luotnghe << endl;
	cout << "Authorization : " << authorized << endl;
	cout << "Price : " << price << endl;
	cout << "Name : " << name << endl;
}

int Song::getLuotNghe() {
	return luotnghe;
}

string Song::getName() {
	return name;
}



bool validPass(string pass) {
	if (pass.size() < 8) return false;
	for (int i = 0; i < pass.size(); i++) {
		if (pass[i] == 32) return false;
	}
	return true;
}





#include"function.h"

void Leaf::inputComponent() {
	cout << "\n***** Input Leaf file *****\n";
	cout << "Enter File Name : ";
	getline(cin, name);
	cout << "Enter File Size : ";
	cin >> size;
	cin.ignore();
}

string Leaf::GetName() {
	return this->name;
}

float Leaf::GetSize() {
	return this->size;
}

void Leaf::outputComponent() {
	cout << "\n***** Leaf Infor *****\n";
	cout << "Name : " << name << endl;
	cout << "Size :" << size << endl;
}
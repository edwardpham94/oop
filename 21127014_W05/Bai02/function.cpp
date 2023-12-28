#include"function.h"

MangSoNguyen::MangSoNguyen() {
	this->kichthuoc = 1;
	dulieu = new int[kichthuoc];
}

MangSoNguyen::MangSoNguyen(int size) {
	this->kichthuoc = size;
	dulieu = new int[kichthuoc];

	for (int i = 0; i < size; i++) {
		this->dulieu[i] = i + 1;
	}
}

MangSoNguyen::~MangSoNguyen() {
	delete[] dulieu;
}

MangSoNguyen::MangSoNguyen(const MangSoNguyen& temp) {
	this->kichthuoc = temp.kichthuoc;
	this->dulieu = new int[this->kichthuoc];

	for (int i = 0; i < temp.kichthuoc; i++) {
		this->dulieu[i] = temp.dulieu[i];
	}
}

MangSoNguyen MangSoNguyen::operator +(const MangSoNguyen& temp) {
	MangSoNguyen result;
	result.kichthuoc = max(temp.kichthuoc, this->kichthuoc);
	result.dulieu = new int[result.kichthuoc];
	
	int n = min(temp.kichthuoc, this->kichthuoc);
	for (int i = 0; i < n; i++) {
		result.dulieu[i] = temp.dulieu[i] + this->dulieu[i];
		cout << result.dulieu[i] << "\t";
	}

	if (temp.kichthuoc > this->kichthuoc) {
		for (int i = n; i < result.kichthuoc; i++) {
			result.dulieu[i] = temp.dulieu[i];
		}
	}
	else if (temp.kichthuoc > this->kichthuoc) {
		for (int i = n; i < result.kichthuoc; i++) {
			result.dulieu[i] = this->dulieu[i];
		}
	}
	return result;
}

istream& operator >>(istream& is, MangSoNguyen& temp) {
	cout << "Enter the size  : ";
	is >> temp.kichthuoc;
	temp.dulieu = new int[temp.kichthuoc];

	for (int i = 0; i < temp.kichthuoc; i++) {
		cin >> temp.dulieu[i];
	}
	return is;
}

ostream& operator <<(ostream& os, const MangSoNguyen& temp) {
	cout << "\nThe arr : ";
	for (int i = 0; i < temp.kichthuoc; i++) {
		cout << temp.dulieu[i] << "\t";
	}
	cout << endl;
	return os;
}

MangSoNguyen& MangSoNguyen::operator =(const MangSoNguyen& temp) {
	this->kichthuoc = temp.kichthuoc;
	this->dulieu = new int[this->kichthuoc];

	for (int i = 0; i < this->kichthuoc; i++) {
		this->dulieu[i] = temp.dulieu[i];
	}
	return *this;
}

MangSoNguyen& MangSoNguyen::operator ++() {
	for (int i = 0; i < this->kichthuoc; i++) {
		this->dulieu[i] = this->dulieu[i] + 1;
	}
	return *this;
}

MangSoNguyen MangSoNguyen::operator ++(int x) {
	MangSoNguyen temp;
	++* this;
	return temp;
}
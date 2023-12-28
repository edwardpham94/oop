#include"function.h"

Diem::Diem(int x, int y) {
	this->x = new int;
	this->y = new int;
	*this->x = x;
	*this->y = y;
}

istream& operator>>(istream& is, Diem& temp) {
	cout << endl;
	cout << "Enter value x : ";
	is >> *temp.x;
	cout << "Enter value y : ";
	is >> *temp.y;
	return is;
}

ostream& operator<<(ostream& os, const Diem& temp) {
	os << "(" << *temp.x << "," << *temp.y << ")";
	return os;
}

Diem Diem::operator =(const Diem& temp) {
	this->y = new int;
	this->x = new int;
	this->x = temp.x;
	this->y = temp.y;
	return *this;
}

Diem::~Diem() {
	delete this->x;
	delete this->y;
}

void Diem::setX(int x) {
	this->x = new int;
	*this->x = x;
}


void Diem::setY(int x) {
	this->y = new int;
	*this->y = x;
}


/// ////////////////////////////////////////////// cau b 
QuanCo::QuanCo(string name, int x, int y) {
	this->name = name;
	Diem temp(x, y);
	cout << temp;
	this->currentPoint.setX(x);
	this->currentPoint.setY(y);
	//this->currentPoint = temp;
	cout << this->currentPoint;
}

QuanCo::QuanCo(string name, vector<Diem> listDiem, Diem currentPoint) {
	this->name = name;
	this->listDiem = listDiem;
	this->currentPoint = currentPoint;
}

QuanCo::QuanCo(const QuanCo& temp) {
	this->name = temp.name;
	this->listDiem = temp.listDiem;
	this->currentPoint = temp.currentPoint;
}

void QuanCo::inputQuanCo() {
	cout << "\n*** Enter QuanCo Infor ***";
	cout << "\nEnter the Name of QuanCo : ";
	getline(cin, this->name);
	cout << "Enter the Current Point (x , y)";
	int x;
	int y;
	cin >> x >> y;
	this->currentPoint.setX(x);
	this->currentPoint.setY(y);
	cout << this->currentPoint;

	int n;
	cout << "Enter the number of Point could go : ";
	cin >> n;
	cout << "\nEnter point : ";


	for (int i = 0; i < n; i++) {
		int e, f;
		cout << "Enter point (x, y) :";
		cin >> e >> f;
		//this->listDiem[i].setX(e);
		//this->listDiem[i].setY(f);
		// 
		//this->listDiem.push_back(a);
	}
}

void QuanCo::outputQuanCo() {
	cout << "\nInfor QuanCo\n";
	cout << "Name : " << this->name;
	cout << "\nCurrent Point" << this->currentPoint;
	cout << "\nPoint could go : ";
	int n = this->listDiem.size();
	for (int i = 0; i < n; i++) {
		cout << this->listDiem[i] << "\t";
	}
}

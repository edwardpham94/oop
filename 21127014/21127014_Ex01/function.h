#include<iostream>
#include<vector>
#include<string>
using namespace std;

extern const vector<string> list = { "ACD", "TCF", "TAD", "QSE", "POT", "DEAS", "RFS", "DCR" };


class Person {

protected:
	string name;
	string birth;
	string id;

public:
	Person() : Person("Pham Hong Gia Bao", "09/04/2003", "21127014"){}
	Person(string name, string birth, string id);
	double countSalary();
	void inputInfor();

};

class GiangVien :Person {

protected:
	string hocHam;
	string hocVi;
	int yearTeaching;
	vector<string> listSub;

public:
	GiangVien() : GiangVien("Giao su", "Tien si", 20, list) {}
	GiangVien(string hocHam, string hocVi, int yearTeaching, vector<string> listSub);
	double countSalary();
	void inputInfor();
};


class TroGiang: GiangVien{

protected:

public:
	double countSalary();

};


class NghienCuuVien:Person {

protected:
	vector<string> IdWorking;
	vector<string> IdWorked;
	int yearExp;

public:
	//long countSalary();
	//int getResearchD();
};

class ChuyenVien : NghienCuuVien {
public:
	//long countSalary();
	//int getResearchT();
};


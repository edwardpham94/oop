#include<iostream>
#include<vector>
#include<string.h>
#include<string>


using namespace std;

class Person {
protected:
	string name;
	string birthday;
	string id;
public:
	Person();

	Person(string name, string birthday, string id);

	Person(const Person& temp);

	void inputPerson();

	void outputPerson();
};



class GiangVien : public Person {
protected:
	string hocHam;
	string hocVi;
	int yearTeaching;
	vector<string> listSub;
public:
	GiangVien();

	GiangVien(string name1, string birthday1, string id1, string hocHam1, string hocVi1, int yearTeaching1, vector<string> listSub);

	GiangVien(const GiangVien& temp);

	void inputGV();

	void outputGV();

	double salaryGV();
};


class TroGiang : public Person {
protected:
	int monTroGiang;
public:
	TroGiang();

	TroGiang(const TroGiang& temp);

	void inputTG();

	void outputTG();

	double salaryTG();
};

class NghienCuuVien : public Person {
protected:
	int yearResearching;
	vector<string> listNghienCuu;

public:
	NghienCuuVien();

	NghienCuuVien(const NghienCuuVien& temp);

	void inputNCV();

	void outputNCV();

	int researchWithD();

	double salaryNCV();
};

bool isCharacterD(string temp);
bool isCharacterT(string temp);


class ChuyenVien : public Person {
protected:
	int yearWorking;
	vector<string> listGiaoDuc;
public:
	ChuyenVien();

	void inputCV();

	int researchWithT();

	void outputCV();

	double salaryCV();
};

class Uni {
private:
	vector<GiangVien> listGV;
	vector<TroGiang> listTG;
	vector<NghienCuuVien> listNCV;
	vector<ChuyenVien> listCV;
public:
	void inputUni();
	void outputUni();
	double staffSalary();
};


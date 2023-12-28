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

	virtual void input();

	virtual void output();

	virtual double salary() {
		return 0;
	}
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

	void input();

	void output();

	double salary();
};


class TroGiang : public Person {
protected:
	int monTroGiang;
public:
	TroGiang();

	TroGiang(const TroGiang& temp);

	void input();

	void output();

	double salary();
};

class NghienCuuVien : public Person {
protected:
	int yearResearching;
	vector<string> listNghienCuu;

public:
	NghienCuuVien();

	NghienCuuVien(const NghienCuuVien& temp);

	void input();

	void output();

	int researchWithD();

	double salary();
};

bool isCharacterD(string temp);
bool isCharacterT(string temp);


class ChuyenVien : public Person {
protected:
	int yearWorking;
	vector<string> listGiaoDuc;
public:
	ChuyenVien();

	void input();

	int researchWithT();

	void output();

	double salary();
};


class Uni {
private:
	static Uni* instance;
	vector<Person*> listStaff;
	Uni() {

	}
public:

	static Uni* GetInstance()
	{
		if (instance == NULL)
		{
			instance = new Uni();
		}
		return instance;
	}

	static void DeleteInstance()
	{
		if (instance)
		{
			delete instance;
			instance = NULL;
		}
	}

	~Uni()
	{
		for (int i = 0; i < listStaff.size(); i++) {
			delete listStaff[i];
		}
	}


	void inputStaff();
	void outputStaff();
	double uniSalary();
	double maxSalary();
};




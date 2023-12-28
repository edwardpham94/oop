#include<iostream>
#include<string>
using namespace std;

string jobOption(unsigned int day);
string createMaSo(string name, unsigned int day);
float salaryRate(string job);

class NhanVien
{
//----------------------------------------------------------------private:
	string name;
	unsigned int day;
	string maSo;
	string chucDanh;
	float salary;

public:
	// defalt constructor
	NhanVien() : NhanVien("BaoPham", 500, "500BaoPham", "Quan ly", 2.25) {}


	// copy constructor
	NhanVien(const NhanVien& temp) {
		this->name = temp.name;
		this->chucDanh = temp.chucDanh;
		this->day = temp.day;
		this->salary = temp.salary;
		this->maSo = createMaSo(this->name, this->day);
	}

	NhanVien(string name, unsigned int day, string maSo, string chucDanh, float salary) {
		this->name = name;
		this->day = day;
		this->maSo = maSo;
		this->chucDanh = chucDanh;
		this->salary = salary;
	}

	NhanVien(string name, unsigned int day) {
		this->name = name;
		this->day = day;
		this->maSo = createMaSo(name, day);
		this->chucDanh = jobOption(day);
		this->salary = salaryRate(this->chucDanh);
	}


	string getName();
	unsigned int getDay();
	string getMaSo();
	string getChucDanh();
	float getSalary();

	void setName(string name);
	void setDay(unsigned int x);
	void setMaSo(string maso);
	void setChucDanh(string str);
	void setSalary(float number);

	void inputNhanvien();
	void outputNhanVien();

	~NhanVien() {

	};

private:

};



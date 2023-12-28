#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <cstdlib>
#include<fstream>
#include <cstdio>
using namespace std;
class HocSinh
{
	string name;
	string phoneNumber;
	float score;

public:
	void inputHocSinh();
	void ouputHocSinh();
	void getValue(string str1, string str2, float number);
	string getName();
	string getPhoneNumber();
	float  getScore();

private:
};

bool checkName(string str);
bool checkPhoneNumber(string str);
bool checkScore(float a);

class LopHoc
{
	vector<HocSinh> student;
public:
	void addNewStudent();
	void deleteAStudent();
	void outputList();
	void inputDataFile();
	void sortDesending();
private:

};
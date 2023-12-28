#include<iostream>
#include<vector>
#include<string.h>
#include<string>


using namespace std;

class PhongQuanLy {
	static vector<PhongQuanLy*> DoiTuongMau;
public:
	virtual PhongQuanLy* Clone() = 0;
	virtual string LayTenDoiTuong() = 0;
	virtual void input() = 0;
	virtual void output() = 0;
	virtual double salary() = 0;

	static void ThemDoiTuongMau(PhongQuanLy* ns) {
		if (ns == NULL) return;
		int pos = -1;
		for (int i = 0; i < DoiTuongMau.size(); i++)
		{
			PhongQuanLy* mau = DoiTuongMau[i];
			if (mau->LayTenDoiTuong() == ns->LayTenDoiTuong())
				pos = i;
		}
		if (pos == -1) DoiTuongMau.push_back(ns);
	}

	static PhongQuanLy* TaoDoiTuongTheoTen(string tenNS) {
		for (int i = 0; i < DoiTuongMau.size(); i++)
		{
			PhongQuanLy* mau = DoiTuongMau[i];
			if (mau->LayTenDoiTuong() == tenNS)
				return DoiTuongMau[i]->Clone();
		}
		cout << "Khong co ten doi tuong hop le\n";
		return NULL;
	}

	static void XoaDoiTuongMau() {
		for (int i = 0; i < DoiTuongMau.size(); i++)
		{
			delete DoiTuongMau[i];
		}
	}

	virtual ~PhongQuanLy() {
	}
};

class GiangVien : public PhongQuanLy {
protected:
	string name;
	string birthday;
	string id;
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

	string LayTenDoiTuong();

	PhongQuanLy* Clone() {
		return new GiangVien(*this);
	}
};

class TroGiang : public PhongQuanLy {
protected:
	string name;
	string birthday;
	string id;
	int monTroGiang;
public:
	TroGiang();

	TroGiang(const TroGiang& temp);

	void input();

	void output();

	double salary();

	string LayTenDoiTuong();

	PhongQuanLy* Clone() {
		return new TroGiang(*this);
	}
};


class NghienCuuVien : public PhongQuanLy {
protected:
	string name;
	string birthday;
	string id;
	int yearResearching;
	vector<string> listNghienCuu;

public:
	NghienCuuVien();

	NghienCuuVien(const NghienCuuVien& temp);

	void input();

	void output();

	int researchWithD();

	double salary();

	string LayTenDoiTuong();

	PhongQuanLy* Clone() {
		return new NghienCuuVien(*this);
	}
};

bool isCharacterD(string temp);
bool isCharacterT(string temp);

class ChuyenVien : public PhongQuanLy {
protected:
	string name;
	string birthday;
	string id;
	int yearWorking;
	vector<string> listGiaoDuc;
public:
	ChuyenVien();

	void input();

	int researchWithT();

	void output();

	double salary();

	string LayTenDoiTuong();

	PhongQuanLy* Clone() {
		return new ChuyenVien(*this);
	}
};



















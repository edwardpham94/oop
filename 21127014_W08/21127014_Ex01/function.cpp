#include"function.h"


Person::Person() {
	this->name = "Bao Pham";
	this->birthday = "09/04/2003";
	this->id = "21127014";
}

Person::Person(string name, string birthday, string id) {
	this->name = "Bao Pham";
	this->birthday = "09/04/2003";
	this->id = "21127014";
}

Person::Person(const Person& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
}

void Person::inputPerson() {
	cout << "Enter the Name : ";
	getline(cin, this->name);
	cout << "Enter the Birthday : ";
	getline(cin, this->birthday);
	cout << "Enter the Id : ";
	getline(cin, this->id);
}

void Person::outputPerson() {
	cout << "Name : " << name << endl;
	cout << "Birthday : " << birthday << endl;
	cout << "Id : " << id << endl;
}

GiangVien::GiangVien() {
	this->name = "Pham Hong Gia Bao";
	this->birthday = "09/04/2003";
	this->id = "21127014";
	this->hocHam = "Giao su";
	this->hocVi = "Tien si";
	this->yearTeaching = 25;
	vector<string> listSub = { "TTH", "DSTT", "OOP", "Java" };
	this->listSub = listSub;
}

GiangVien::GiangVien(string name1, string birthday1, string id1, string hocHam1, string hocVi1, int yearTeaching1, vector<string> listSub) {
	this->name = name1;
	this->birthday = birthday1;
	this->id = id1;
	this->hocHam = hocHam1;
	this->hocVi = hocVi1;
	this->yearTeaching = yearTeaching1;
	this->listSub = listSub;
}

GiangVien::GiangVien(const GiangVien& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
	this->hocHam = temp.hocHam;
	this->hocVi = temp.hocVi;
	this->yearTeaching = temp.yearTeaching;
	this->listSub = temp.listSub;
}

void GiangVien::inputGV() {
	cout << "\n*** Ennter the GiangVien Infor ***\n";
	inputPerson();
	cout << "Enter the Hoc Ham : ";
	getline(cin, this->hocHam);
	cout << "Enter the Hoc vi : ";
	getline(cin, this->hocVi);
	cout << "Enter the YearTeaching : ";
	cin >> this->yearTeaching;
	int n;
	cout << "Enter the number of Subject : ";
	cin >> n;
	cin.ignore();
	this->listSub.clear();
	for (int i = 0; i < n; i++) {
		string subName;
		cout << "Enter Subject No." << i + 1 << " : ";
		getline(cin, subName);
		this->listSub.push_back(subName);
	}
}

void GiangVien::outputGV() {
	cout << "\n*** The GiangVien Infor ***\n";
	outputPerson();
	cout << "Hoc Ham : " << hocHam << endl;
	cout << "The Hoc vi : " << hocVi << endl;
	cout << "YearTeaching : " << yearTeaching << endl;
	int n = listSub.size();
	cout << "List of Subject : \n";
	for (int i = 0; i < n; i++) {
		cout << "\tSubject No." << i + 1 << " : " << listSub[i] << endl;
	}
}

double GiangVien::salaryGV() {
	return this->listSub.size() * this->yearTeaching * 0.12 * 20000;
}
//////////////////////////////////////////////  TRO GIANG  /////////////////////////////////////////////

TroGiang::TroGiang(const TroGiang& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
	this->monTroGiang = temp.monTroGiang;
}

void TroGiang::inputTG() {
	cout << "\n\n*** Enter the TroGiang Infor ***\n";
	inputPerson();
	cout << "Enter the Mon Thinh Giang : ";
	cin >> this->monTroGiang;
}

TroGiang::TroGiang() {
	Person();
	this->monTroGiang = 0;
}

void TroGiang::outputTG() {
	cout << "\n*** The TroGiang Infor ***\n";
	outputPerson();
	cout << "Mon tro giang : " << this->monTroGiang;
}

double TroGiang::salaryTG() {
	return this->monTroGiang * 0.3 * 18000;
}

//////////////////////////////////////////////// NGHIEN CUU VIEN ///////////////////////////////////////////

NghienCuuVien::NghienCuuVien() {
	Person();
	this->yearResearching = 0;
	vector<string> list2 = { "T140", "D748", "O4512", "J741" };
	this->listNghienCuu = list2;
}

NghienCuuVien::NghienCuuVien(const NghienCuuVien& temp) {
	this->name = temp.name;
	this->birthday = temp.birthday;
	this->id = temp.id;
	this->yearResearching = temp.yearResearching;
	this->listNghienCuu = temp.listNghienCuu;
}

void NghienCuuVien::inputNCV() {
	cout << "\n*** Ennter the NghienCuuVien Infor ***\n";
	inputPerson();
	cout << "Enter the Year Working : ";
	cin >> this->yearResearching;

	int n;
	this->listNghienCuu.clear();
	cout << "Enter the number of Du an NghienCuu : ";
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string subName;
		cout << "Enter DANC No." << i + 1 << " : ";
		getline(cin, subName);
		this->listNghienCuu.push_back(subName);
	}
}

void NghienCuuVien::outputNCV() {
	cout << "\n*** NghienCuuVien Infor ***\n";
	outputPerson();
	cout << "Year Working : " << this->yearResearching << endl;

	int n = this->listNghienCuu.size();
	for (int i = 0; i < n; i++) {
		cout << "\tNo." << i + 1 << " : " << this->listNghienCuu[i] << endl;
	}
}

bool isCharacterT(string temp) {
	if (temp[0] == 'T') return true;
	return false;
}

bool isCharacterD(string temp) {
	if (temp[0] == 'D') return true;
	return false;
}

int NghienCuuVien::researchWithD() {
	int count = 0;
	int n = this->listNghienCuu.size();
	for (int i = 0; i < n; i++) {
		if (isCharacterT(this->listNghienCuu[i]))
			count++;
	}
	return count;
}

double NghienCuuVien::salaryNCV() {
	return (this->yearResearching * 2 + this->researchWithD()) * 20000;
}

///////////////////////////////////////////// CHUYEN VIEN /////////////////////////////////////////////////////

int ChuyenVien::researchWithT() {
	int count = 0;
	int n = this->listGiaoDuc.size();
	for (int i = 0; i < n; i++) {
		if (isCharacterT(this->listGiaoDuc[i]))
			count++;
	}
	return count;
}

ChuyenVien::ChuyenVien() {
	Person();
	this->yearWorking = 0;
	vector<string> list2 = { "r140", "E548", "Z4512", "A741" };
	this->listGiaoDuc = list2;
}

void ChuyenVien::inputCV() {
	cout << "\n*** Enter the ChuyenVien Infor ***\n";
	inputPerson();
	cout << "Enter the Year Working : ";
	cin >> this->yearWorking;

	int n;
	this->listGiaoDuc.clear();
	cout << "Enter the number of Du an NghienCuu : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		string subName;
		cout << "Enter DAGD No." << i + 1 << " : ";
		getline(cin, subName);
		this->listGiaoDuc.push_back(subName);
	}
}


void ChuyenVien::outputCV() {
	cout << "\n*** NghienCuuVien Infor ***\n";
	outputPerson();
	cout << "Year Working : " << this->yearWorking << endl;

	int n = this->listGiaoDuc.size();
	cout << "\nList Du An Giao Duc : ";
	for (int i = 0; i < n; i++) {
		cout << "\tNo." << i + 1 << " : " << this->listGiaoDuc[i] << endl;
	}
}

double ChuyenVien::salaryCV() {
	return this->yearWorking * researchWithT() * 18000;
}


void Uni::inputUni() {
	int opt = 0;
	while (opt != 5) {
		cout << "\t\t*** List NhanSu ***\n";
		cout << "\tEnter '1' : Fill GiangVien Infor\n";
		cout << "\tEnter '2' : Fill TroGiang Infor\n";
		cout << "\tEnter '3' : Fill NghienCuuVien Infor\n";
		cout << "\tEnter '4' : Fill ChuyenVien Infor\n";
		cout << "\tEnter '5' : Exit\n";
		cout << "Choose option : ";
		cin >> opt;
		cin.ignore();
		switch (opt)
		{
		case 1:
		{
			GiangVien a;
			a.inputGV();
			listGV.push_back(a);
			break;
		}
		case 2:
		{
			TroGiang a;
			a.inputTG();
			listTG.push_back(a);
			break;
		}
		case 3:
		{
			NghienCuuVien a;
			a.inputNCV();
			listNCV.push_back(a);
			break;
		}
		case 4:
		{
			ChuyenVien a;
			a.inputCV();
			listCV.push_back(a);
			break;
		}
		case 5:
			return;
		}
	}
}

void Uni::outputUni() {
	cout << "\n***** University Staff Information *****\n";
	for (int i = 0; i < listGV.size(); i++) {
		listGV[i].outputGV();
	}
	for (int i = 0; i < listTG.size(); i++) {
		listTG[i].outputTG();
	}
	for (int i = 0; i < listNCV.size(); i++) {
		listNCV[i].outputNCV();
	}
	for (int i = 0; i < listCV.size(); i++) {
		listCV[i].outputCV();
	}
}

double Uni::staffSalary() {
	double sum = 0;
	for (int i = 0; i < listGV.size(); i++) {
		sum += listGV[i].salaryGV();
	}
	for (int i = 0; i < listTG.size(); i++) {
		sum += listTG[i].salaryTG();
	}
	for (int i = 0; i < listNCV.size(); i++) {
		sum += listNCV[i].salaryNCV();

	}
	for (int i = 0; i < listCV.size(); i++) {
		sum += listCV[i].salaryCV();
	}
	return sum;
}

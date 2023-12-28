#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class SanPham {
protected:
	string name;
	string type;
	int price;
	int quantity;
public:
	SanPham();
	void setName(string x);
	void setType(string x);
	void setPrice(int x);
	void setQuantity(int x);
	string getName();
	string getType();
	int getPrice();
	int getQuantity();
	void updateQuantity();
	void inputSanPham();
	void outputSanPham();
	~SanPham();
};


class CuaHang {
protected:
	string name;
	string dateStart;
	vector<SanPham> listSP;
public:
	CuaHang();
	~CuaHang();
	void setName(string x);
	void setdateStart(string x);
	void setListSP(SanPham x);
	void setListSP1(vector<SanPham> x);
	void removeSanPham(string name);
	string getName();
	string getDate();
	void getListSP();
	vector<SanPham> getListSP1();
	SanPham addVaoGioHang(string name);
	void readSanPham();
	void inputSanPham();
	void outputSanPham();
};



class DanhMucHangHoa {
protected:
	string name;
public:
	DanhMucHangHoa();
	virtual ~DanhMucHangHoa();
	virtual string getName() = 0;
	virtual void addDanhMucHangHoa(DanhMucHangHoa* p);
	virtual void removeDanhMucHangHoa(DanhMucHangHoa* p);
	bool operator==(const DanhMucHangHoa& p);
	virtual void input() = 0;
	virtual void output() = 0;
	friend istream& operator>>(istream& is, DanhMucHangHoa* p);
	friend ostream& operator<<(ostream& os, DanhMucHangHoa* p);
};

class composite : public DanhMucHangHoa {
	vector<DanhMucHangHoa*> folder;
public:
	composite();
	~composite();
	string getName();
	void addDanhMucHangHoa(DanhMucHangHoa* p);
	void removeDanhMucHangHoa(DanhMucHangHoa* p);
	void input();
	void output();
};

class leaf : public DanhMucHangHoa {
public:
	leaf();
	~leaf();
	string getName();
	void input();
	void output();
};

class Date {
protected:
	int ngay, thang, nam;
public:
	Date() {

	}
	~Date() {

	}
	void setDate(int x, int y, int z) {
		ngay = x;
		thang = y;
		nam = z;
	}
	void getDate() {
		cout << ngay << "/" << thang << "/" << nam;
	}
	int getNgay(){
		return ngay;
	}
	int getThang() {
		return thang;
	}
	int getNam() {
		return nam;
	}
};

class DonHang {
protected:
	string ID;
	vector<SanPham> listSP;
	int quantity;
	int tongDonHang;  // tien hang truoc khi ap ma giam gia
	int tongThanhToan; // tien hang khi da ap ma giam gia
	Date dateBooked;
public:
	DonHang();
	~DonHang();
	void setID(string x);
	void setListSP(SanPham x);
	void setQuantity(int x);
	void setTongDonHang(int x);
	void setTongThanhToan(int x);
	void setdateBooked(int x, int y, int z);
	string getID();
	vector<SanPham> getListSP();
	int getQuantity();
	int getTongDonHang();  
	int getTongThanhToan();
	int getNgay();
	int getThang();
	int getNam();
	void outputDonHang();
};

class KhachHang {
protected:
	string name;
	string email;
	string password;
	string address;
	string sex;
	string level;
	Date birthday;
	int tienXu;
	vector<SanPham> gioHang; 
	vector<DonHang> donHang;
public:
	KhachHang();
	~KhachHang();
	void setName(string x);
	void setEmail(string x);
	void setPassword(string x);
	void setAddress(string x);
	void setSex(string x);
	void setBirthday(int x, int y, int z);
	void setLevel(int x);
	string getLevel();
	void setGioHang(SanPham x);
	void setDonHang(DonHang x);
	void removeSanPhamKhoiGioHang(string name);
	string getEmail();
	string getPassword();
	string getName();
	string getAddress();
	string getSex();
	int getNgay();
	int getThang();
	int getNam();
	vector<SanPham> getGioHang();
	vector<DonHang> getDonHang();
	int getTongChiTieu();
	float decreaseRate();
	void updateGioHang();
	void outputKhachHang();
	void setDongXu(int x);
	int getDongXu();
	void updateDongXu();
};



class MaGiamGia {
protected:
	string name;
	string type;
	float percent;
	int maxMoney;
	string condition;
public:
	MaGiamGia();
	~MaGiamGia();
	void setName(string x);
	void setType(string x);
	void setCondition(string x);
	void setPercent(float x);
	void setMax(int x);
	string getName();
	string getType();
	float getPercent();
	int getMaxMoney();
	string getCondition();
	void outputMGG();
};

class ReviewSanPham {
protected:
	string name;
	string danhGia;
public:
	void setName(string x);
	void setDanhGia(string x);
	string getName();
	string getDanhGia();
};

class SanThuongMai {
private:
	static SanThuongMai* instance;
	vector<CuaHang> listCH;
	vector<KhachHang> listKH;
	vector<MaGiamGia> listMGG;
	vector<ReviewSanPham> listreview;
	SanThuongMai()
	{ }
public:
	static SanThuongMai* GetInstance() {
		if (instance == NULL)
		{
			instance = new SanThuongMai();
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
	~SanThuongMai()
	{
	}
	void readCuaHang();
	void writeCuaHang();
	void outputCuaHang();
	void readKhachHang();
	void writeKhachHang();
	void outputKhachHang();
	void readMaGiamGia();
	void outputMaGiamGia();
	void addSanPhamVaoCuaHang();
	void removeSanPhamKhoiCuaHang();
	void addSanPhamVaoGioHang(int index);
	void removeSanPhamKhoiGioHang(int index);
	void thanhToanGioHang(int index);
	void thuHangKhachHang();
	void signUp();
	int logIn();
	void mainMenu();
	void reviewSanPham(int index);
};


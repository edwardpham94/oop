#include"function.h"

void SanThuongMai::readCuaHang() {
	fstream fin;
	fin.open("CuaHang.txt", ios::in);
	if (fin.is_open()) {
		while (!fin.eof()) {
			CuaHang a;
			string tenCH, ngayban;
			int soluongSP;
			getline(fin, tenCH);
			a.setName(tenCH);
			getline(fin, ngayban);
			a.setdateStart(ngayban);
			fin >> soluongSP;
			fin.ignore();
			for (int i = 0; i < soluongSP; i++) {
				SanPham temp;
				string newName, newType;
				int newPrice, newQuantity;
				getline(fin, newName);
				getline(fin, newType);
				fin >> newPrice;
				fin >> newQuantity;
				fin.ignore();
				temp.setName(newName);
				temp.setType(newType);
				temp.setPrice(newPrice);
				temp.setQuantity(newQuantity);
				a.setListSP(temp);
			}
			listCH.push_back(a);
		}
	}
	else cout << "ERROR";
	fin.close();
}

void SanThuongMai::outputCuaHang() {
	cout << "*************************************";
	for (int i = 0; i < listCH.size(); i++) {
		cout << "\n***** Cua Hang So " << i + 1 <<" *****" << endl;
		cout << "Ten Cua Hang : " << listCH[i].getName() << endl;
		cout << "Ngay Mo Ban : " << listCH[i].getDate() << endl;
		listCH[i].getListSP();
	}
}

void SanThuongMai::readKhachHang() {
	fstream fin;
	fin.open("KhachHang.txt", ios::in);
	if (fin.is_open()) {
		while (!fin.eof()) {
			KhachHang a;
			string ten, email, matKhau, diaChi, gioiTinh;
			int ngay, thang, nam, dongxu;
			int soluongGioHang, soLuongDonHang;
			getline(fin, ten);
			getline(fin, email);
			getline(fin, matKhau);
			getline(fin, diaChi);
			getline(fin, gioiTinh);
			a.setName(ten);
			a.setEmail(email);
			a.setPassword(matKhau);
			a.setAddress(diaChi);
			a.setSex(gioiTinh);
			fin >> ngay;
			fin >> thang;
			fin >> nam;
			fin >> dongxu;
			a.setBirthday(ngay, thang, nam);
			a.setDongXu(dongxu);
			fin >> soluongGioHang;
			fin.ignore();
			for (int i = 0; i < soluongGioHang; i++) {
				SanPham temp;
				string newName, newType;
				int newPrice, newQuantity;
				getline(fin, newName);
				getline(fin, newType);
				fin >> newPrice;
				fin >> newQuantity;
				fin.ignore();
				temp.setName(newName);
				temp.setType(newType);
				temp.setPrice(newPrice);
				temp.setQuantity(newQuantity);
				a.setGioHang(temp);
			}
			fin >> soLuongDonHang;
			fin.ignore();
			for (int i = 0; i < soLuongDonHang; i++) {
				DonHang newDonHang;
				string IDdonHang;
				getline(fin, IDdonHang);
				newDonHang.setID(IDdonHang);
				int soluongsanpham;
				fin >> soluongsanpham;
				fin.ignore();
				for (int i = 0; i < soluongsanpham; i++) {
					SanPham temp;
					string newName, newType;
					int newPrice, newQuantity;
					getline(fin, newName);
					getline(fin, newType);
					fin >> newPrice;
					fin >> newQuantity;
					fin.ignore();
					temp.setName(newName);
					temp.setType(newType);
					temp.setPrice(newPrice);
					temp.setQuantity(newQuantity);
					newDonHang.setListSP(temp);
				}
				int number, sumDon, sumMoney, d, m, y;
				fin >> number;
				fin >> sumDon; 
				fin >> sumMoney;
				fin >> d;
				fin >> m;
				fin >> y;
				newDonHang.setQuantity(number);
				newDonHang.setTongDonHang(sumDon);
				newDonHang.setTongThanhToan(sumMoney);
				newDonHang.setdateBooked(d, m, y);
				a.setDonHang(newDonHang);
			}
			listKH.push_back(a);
		}
	}
	else cout << "ERROR";
	fin.close();
}

void SanThuongMai::outputKhachHang() {
	cout << "************************************";
	for (int i = 0; i < listKH.size(); i++) {
		cout << "Khach Hang so " << i + 1 << " : " << endl;
		listKH[i].outputKhachHang();
	}

	this->writeKhachHang();
}



void SanThuongMai::writeCuaHang() {
	fstream fout;
	fout.open("CuaHang1.txt", ios::out);
	if (fout.is_open()) {
		//cout << "File is open to write";
		for (int i = 0; i < listCH.size(); i++) {
			fout << listCH[i].getName() << endl;
			fout << listCH[i].getDate() << endl;
			vector<SanPham> list;

			list = listCH[i].getListSP1();
			fout << list.size() << endl;
			for (int i = 0; i < list.size(); i++) {
				fout << list[i].getName() << endl;
				fout << list[i].getType() << endl;
				fout << list[i].getQuantity() << endl;
				fout << list[i].getPrice() << endl;
			}
		}
	}
	else {
		cout << "Fail";
	}
	fout.close();
}

void SanThuongMai::addSanPhamVaoCuaHang() {
	cout << "\n**************  Them san pham vao cua hang **************\n";
	string tenCuaHang;
	cout << "Nhap ten cua hang can them san pham : ";
	getline(cin, tenCuaHang);
	cout << "Nhap so luong san pham can them vao :";
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		SanPham temp;
		temp.inputSanPham();
		bool check = 0;
		for (int i = 0; i < listCH.size(); i++) {
			if (listCH[i].getName() == tenCuaHang) {
				listCH[i].setListSP(temp);
				cout << "\nAdded sucessfull\n";
				check = 1;
			}
		}
		if (check == 0) cout << "\nAdded unsuccessfull\n";
	}

	this->writeCuaHang();
}

void SanThuongMai::removeSanPhamKhoiCuaHang() {
	cout << "\n**************  Xoa san pham khoi cua hang **************\n";
	string tenCuaHang, tenSanPham;
	cout << "Nhap ten cua hang can xoa san pham : ";
	getline(cin, tenCuaHang);
	cout << "Nhap ten san pham can xoa : ";
	getline(cin, tenSanPham);
	for (int i = 0; i < listCH.size(); i++) {
		if (listCH[i].getName() == tenCuaHang) {
			listCH[i].removeSanPham(tenSanPham);
		}
	}

	this->writeCuaHang();
}



void SanThuongMai::signUp() {
	cout << "\n**************  SIGN UP **************\n";
	KhachHang a;
	string ten, email, matKhau, diaChi, gioiTinh;
	int ngay, thang, nam;
	cout << "Nhap Ten Khach Hang : ";
	getline(cin, ten);
	cout << "Nhap Email Khach Hang : ";
	getline(cin, email);
	cout << "Nhap Mau Khau Khach Hang : ";
	getline(cin, matKhau);
	cout << "Nhap Dia Chi Giao Hang : ";
	getline(cin, diaChi);
	cout << "Nhap Gioi Tinh Khach Hang : ";
	getline(cin, gioiTinh);
	a.setName(ten);
	a.setEmail(email);
	a.setPassword(matKhau);
	a.setAddress(diaChi);
	a.setSex(gioiTinh);
	cout << "Nhap Ngay Sinh Nhat Cua Khach Hang : ";
	cin >> ngay;
	cin >> thang;
	cin >> nam;
	a.setBirthday(ngay, thang, nam);
	listKH.push_back(a);
	
}

int SanThuongMai::logIn() {
	cout << "\n**************  Log In **************\n";
	string tenLogin, passLogin;
	cout << "Nhap Email Cua Khach Hang      : ";
	getline(cin, tenLogin);
	cout << "Nhap Mat Khau Cua Khach Hang : ";
	getline(cin, passLogin);
	for (int i = 0; i < listKH.size(); i++) {
		if (listKH[i].getEmail() == tenLogin && listKH[i].getPassword() == passLogin) {
			cout << "\nLogin Successfull\n";
			return i;
		}
	}
	return -1;
}



void SanThuongMai::addSanPhamVaoGioHang(int index) {
	cout << "\n**************  Them san pham vao gio hang **************\n";
	string tenSanPham, tenCuaHang;
	cout << "Nhap Cua Hang co san pham can them vao gio hang : ";
	getline(cin, tenCuaHang);
	cout << "Nhap ten san pham can them vao gio hang : ";
	getline(cin, tenSanPham);
	SanPham result;
	for (int i = 0; i < listCH.size(); i++) {
		if (listCH[i].getName() == tenCuaHang) {
			result = listCH[i].addVaoGioHang(tenSanPham);
		}
	}
	listKH[index].setGioHang(result);

	this->writeKhachHang();

}

void SanThuongMai::removeSanPhamKhoiGioHang(int index) {
	cout << "\n**************  Xoa san pham khoi gio hang **************\n";
	string tenSanPham;
	cout << "Nhap ten san pham can xoa khoi gio hang : ";
	getline(cin, tenSanPham);
	listKH[index].removeSanPhamKhoiGioHang(tenSanPham);

	this->writeKhachHang();
}

void SanThuongMai::writeKhachHang() {
	fstream fout;
	fout.open("KhachHang1.txt", ios::out);
	if (fout.is_open()) {
		for (int i = 0; i < listKH.size(); i++) {
			fout << listKH[i].getName() << endl;
			fout << listKH[i].getEmail() << endl;
			fout << listKH[i].getPassword() << endl;
			fout << listKH[i].getAddress() << endl;
			fout << listKH[i].getSex() << endl;
			fout << listKH[i].getNgay() << endl;
			fout << listKH[i].getThang() << endl;
			fout << listKH[i].getNam() << endl;
			fout << listKH[i].getDongXu() << endl;
			vector<SanPham> listGioHang = listKH[i].getGioHang();
			fout << listGioHang.size() << endl;

			for (int j = 0; j < listGioHang.size(); j++) {
				fout << listGioHang[j].getName() << endl;
				fout << listGioHang[j].getType() << endl;
				fout << listGioHang[j].getPrice() << endl;
				fout << listGioHang[j].getQuantity() << endl;

			}


			vector<DonHang> listDonHang = listKH[i].getDonHang();
			fout << listDonHang.size() << endl;
			for (int j = 0; j < listDonHang.size(); j++) {
				fout << listDonHang[j].getID() << endl;


				vector<SanPham> a = listDonHang[i].getListSP();
				fout << a.size() << endl;
				for (int x = 0; x < a.size(); x++) {
					fout << a[x].getName() << endl;
					fout << a[x].getType() << endl;
					fout << a[x].getPrice() << endl;
					fout << a[x].getQuantity() << endl;
				}

				fout << listDonHang[j].getQuantity() << endl;
				fout << listDonHang[j].getTongDonHang() << endl;
				fout << listDonHang[j].getTongThanhToan() << endl;
				fout << listDonHang[j].getNgay() << endl;
				fout << listDonHang[j].getThang() << endl;
				fout << listDonHang[j].getNam() << endl;
			}
		}
	}
	else {
		cout << "Fail";
	}
	fout.close();
}

void SanThuongMai::readMaGiamGia() {
	fstream fin;
	fin.open("MaGiamGia.txt", ios::in);
	if (fin.is_open()) {
		while (!fin.eof()) {
			MaGiamGia a;
			string ten, loai, dieukien;
			float phantram;
			int toida;
			getline(fin, ten);
			getline(fin, loai);
			getline(fin, dieukien);
			fin >> phantram;
			fin >> toida;
			fin.ignore();
			a.setName(ten);
			a.setCondition(dieukien);
			a.setPercent(phantram);
			a.setType(loai);
			a.setMax(toida);
			listMGG.push_back(a);
		}
	}
	else cout << "ERROR";
	fin.close();
}

void SanThuongMai::outputMaGiamGia() {
	for (int i = 0; i < listMGG.size(); i++) {
		cout << "\nMa giam gia so : " << i + 1 << endl;
		listMGG[i].outputMGG();
	}
}

void SanThuongMai::thanhToanGioHang(int index) {
	cout << "\n**************  Thanh toan gio hang **************\n";
	DonHang newDonHang;
	
	vector<SanPham> giohang = listKH[index].getGioHang();
	cout << "Gio Hang Cua Khach Hang : " << endl;
	this->thuHangKhachHang();
	for (int i = 0; i < giohang.size(); i++) {
		cout << "\tSan pham So " << i + 1 << " : \n";
		giohang[i].outputSanPham();
		cout << endl;
	}
	bool check = false;
	cout << "Xac nhan tien hanh thanh toan : ";
	cin >> check;
	bool tienXu = false;
	int decreaseUseXu = 0;
	cout << "Ban co muon dung tien xu cua minh khong : ";
	cin >> tienXu;
	if (tienXu) decreaseUseXu = listKH[index].getDongXu() / 500 * 10000;
	cin.ignore();
	if (check) {
		cout << "Nhap Ma Giam Gia : ";
		string magiamgia;
		getline(cin, magiamgia);
		int tongtienhang = 0, tongthanhtoan = 0;
		for (int j = 0; j < listMGG.size(); j++) {
			if (magiamgia == listMGG[j].getName()) {
				for (int i = 0; i < giohang.size(); i++) {
					tongtienhang += giohang[i].getPrice();
					newDonHang.setListSP(giohang[i]);
				}
				int sale = tongtienhang * listMGG[j].getPercent();
				if (sale <= listMGG[j].getMaxMoney()) {
					tongthanhtoan = tongtienhang - sale;
				}
				else if (sale > listMGG[j].getMaxMoney()) {
					tongthanhtoan = tongtienhang - listMGG[j].getMaxMoney();
				}
			}
		}
		tongthanhtoan = tongthanhtoan - decreaseUseXu; // tru tien bang so xu tich luy duoc
		float decreasePercent = listKH[index].decreaseRate();
		tongthanhtoan = tongthanhtoan - tongthanhtoan * decreasePercent; // tru theo phan tram dua vao hang khach hang

		cout << "\So Luong Gio Hang : " << giohang.size() << endl;
		cout << "Tong Tien Hang : " << tongtienhang << " VND"  << endl;
		cout << "Tong Tien Thanh Toan : " << tongthanhtoan << " VND" << endl;


		newDonHang.setID("14571");
		newDonHang.setQuantity(giohang.size());
		newDonHang.setTongDonHang(tongtienhang);
		newDonHang.setTongThanhToan(tongthanhtoan);
		newDonHang.setdateBooked(23, 12, 2022);
	}
	listKH[index].updateGioHang();
	listKH[index].setDonHang(newDonHang);

	this->writeKhachHang();
}


void SanThuongMai::thuHangKhachHang() {
	for (int i = 0; i < listKH.size(); i++) {
		int sumMoney = 0;
		sumMoney += listKH[i].getTongChiTieu();
		listKH[i].setLevel(sumMoney);
	}
}

void SanThuongMai::mainMenu() {
	int opt = 0;

	while (opt != 3) {
		cout << "\n*******************************************\n";
		cout << "\t***** Main Menu *****\n";
		cout << "\tNo.1 SignUp\n";
		cout << "\tNo.2 LogIn\n";
		cout << "\tNo.3 Exit\n";
		cout << "\tEnter your option : ";
		cin >> opt;
		cin.ignore();
		switch (opt)
		{
		case 1:
		{
			this->signUp();
			this->writeKhachHang();
			break;
		}
		case 2:
		{
			int index = logIn();
			if (index == -1) {
				cout << "\nLogin Unsucessfull\n";
				break;
			}
			int choose = 0;
			while (choose != 8) {
				cout << "\n*******************************************\n";
				cout << "\t***** Main Menu *****\n";
				cout << "\tNo.1 Them san pham vao cua hang\n";
				cout << "\tNo.2 Xoa san pham khoi cua hang\n";
				cout << "\tNo.3 Them san pham vao gio hang\n";
				cout << "\tNo.4 Xoa san pham khoi gio hang\n";
				cout << "\tNo.5 Phan hang khach hang\n";
				cout << "\tNo.6 Thanh toan san pham trong gio hang\n";
				cout << "\tNo.7 Danh gia san pham - Nhan xu\n";
				cout << "\tNo.8 Exit\n";

				cout << "\tEnter your option : ";
				cin >> choose;
				cin.ignore();
				switch (choose)
				{
				case 1:
				{
					addSanPhamVaoCuaHang();
					break;
				}
				case 2:
				{
					removeSanPhamKhoiCuaHang();
					break;
				}
				case 3:
				{
					addSanPhamVaoGioHang(index);
					break;
				}
				case 4:
				{
					removeSanPhamKhoiGioHang(index);
					break;
				}
				case 5:
				{
					thuHangKhachHang();
					cout << "\n*** DA CAP NHAP HANG CUA TAT CA KHACH HANG THANH CONG ***\n";
					break;
				}
				case 6:
				{
					thanhToanGioHang(index);
					break;
				}
				case 7:
				{
					reviewSanPham(index);
					break;
				}
				}
			}
		}
		}
	}
}

void SanThuongMai::reviewSanPham(int index) {
	cout << "\n**************  Danh gia san pham trong gio hang **************\n";
	ReviewSanPham temp;
	vector<DonHang> listdonhang = listKH[index].getDonHang();
	for (int i = 0; i < listdonhang.size(); i++) {
		vector<SanPham> listsp = listdonhang[i].getListSP();
		for (int j = 0; j < listsp.size(); j++) {
			cout << "\n**** San Pham Cua Ban ****\n";
			listsp[j].outputSanPham();
		}
	}

	string ten, review;
	cout << "Nhap Ten San Pham Ban Muon Danh Gia : ";
	getline(cin, ten);
	for (int i = 0; i < listreview.size(); i++) {
		if (ten == listreview[i].getName()) {
			cout << "\nSan Pham Da Duoc Danh Gia!\n";
			return;
		}
	}
	cout << "Nhap Danh Gia Cua Ban : ";
	getline(cin, review);
	if (review.size() >= 30) {
		temp.setName(ten);
		temp.setDanhGia(review);
		listreview.push_back(temp);
		listKH[index].updateDongXu();
		cout << "\nDanh Gia Cua Ban Da Duoc Ghi Nhan!\nBan Nhan Duoc Them 100 xu!\n";
		
	}

}
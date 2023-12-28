#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

class Song {
protected:
	string name;
	string lyric;
	string composer;
	string year;
	int luotnghe;
	bool authorized; // co ban quyen hay ko
	string country;
	float price;
public:
	void inputSong();
	void outputSong();
	int getLuotNghe();
	string getName();
};

class App {
protected:
	vector<Song> listSong;
	vector<Account> listUser;
public:
	App();
	void outputUser();
	void top5Song();
	void signUp();
	void logIn();
};

class Account {
protected:
	string name;
	string password;
	string vip;
	double price;
public:
	string getName();
	string getPassword();
	string getVip();
	void setName(string newname);
	void setPassword(string pass);
	void setVip(string vip);
	bool checkLogin();
	void suggestSong();
	void writeData();
};

bool validPass(string pass);


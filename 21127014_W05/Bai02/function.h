#include<iostream>
using namespace std;

class MangSoNguyen
{
protected:
	int* dulieu; 
	int kichthuoc; 
public:
	MangSoNguyen();
	MangSoNguyen(int size);
	MangSoNguyen(const MangSoNguyen& temp);
	~MangSoNguyen();

	MangSoNguyen operator +(const MangSoNguyen& temp);
	MangSoNguyen& operator =(const MangSoNguyen& temp);

	//void* operator new(MangSoNguyen n);

	friend istream& operator >>(istream& is, MangSoNguyen& temp);
	friend ostream& operator <<(ostream& os, const MangSoNguyen& temp);

	MangSoNguyen& operator ++();
	MangSoNguyen operator ++(int x);
};




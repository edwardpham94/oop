#include"function.h"
MaGiamGia::MaGiamGia(){}
MaGiamGia::~MaGiamGia(){}
void MaGiamGia::setName(string x) {
	name = x;
}
void MaGiamGia::setType(string x) {
	type = x;
}
void MaGiamGia::setCondition(string x) {
	condition = x;
}
void MaGiamGia::setPercent(float x) {
	percent = x;
}
void MaGiamGia::setMax(int x) {
	maxMoney = x;
}
string MaGiamGia::getName() {
	return name;
}
string MaGiamGia::getType() {
	return type;
}
float MaGiamGia::getPercent() {
	return percent;
}
int MaGiamGia::getMaxMoney() {
	return maxMoney;
}
string MaGiamGia::getCondition() {
	return condition;
}
void MaGiamGia::outputMGG() {
	cout << "Ten : " << getName() << endl;
	cout << "Loai : " << getType() << endl;
	cout << "Diue kiene : " << getCondition() << endl;
	cout << "Phan tram : " << getPercent() << endl;
	cout << "Max : " << getMaxMoney() << endl;
}
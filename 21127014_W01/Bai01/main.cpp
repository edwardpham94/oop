#include"function.h"


int main() {
	PHANSO a, b, c;

	a.inputPhanSo();
	a.outputPhanSo(a);
	
	b.inputPhanSo();
	b.outputPhanSo(b);

	a.congPhanSo(a, b);
	a.truPhanSo(a, b);
	a.nhanPhanSo(a, b);
	a.chiaPhanSo(a, b);

	return 0;
}
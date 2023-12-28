#include"function.h"

int main() {
	PhanSo a;
	
	PhanSo c(a);

	PhanSo::PhanSo(const PhanSo& temp) {
	c.tuSo = new int;
	c.mauSo = new int;
	*this->tuSo = *temp.tuSo;
	*this->mauSo = *temp.mauSo;
}

	
	a.inputPhanSo();
	a.outputPhanSo();
	PhanSo b, c;
	b.inputPhanSo();
	b.outputPhanSo();

	c = a + b;
	c.outputPhanSo();
	c = a - b;
	c.outputPhanSo();
	c = a * b;
	c.outputPhanSo();
	c = a / b;
	c.outputPhanSo();

}
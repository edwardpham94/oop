#include"function.h"

int main() {
	HCN a;
	a.inputHCN(a);
	a.outputHCN(a);
	cout << "\nCheck is HCN : " << a.isHCN(a) << endl;

	if (a.isHCN(a) == true) {
		cout << "Chu vi HCN : " << a.chuVi(a) << endl;
		cout << "Dien tich HCN : " << a.dienTich(a) << endl;
	}
}
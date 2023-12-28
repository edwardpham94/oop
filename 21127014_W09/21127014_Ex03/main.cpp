#include"function.h"

int main() {
	Composite* folder1 = new Composite;
	folder1->inputComponent();
	folder1->outputComponent();

	cout << "Size of folder : " << folder1->GetSize();

	return 0;
}
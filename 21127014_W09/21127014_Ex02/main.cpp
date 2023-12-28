#include"function.h"
Uni* Uni::instance = NULL;
int main() {
	Uni* object = Uni::GetInstance();

	object->inputStaff();
	object->outputStaff();
	cout << endl << "All uni salary : " << object->uniSalary();
	cout << endl << "Max salary : " << object->maxSalary();

	Uni::DeleteInstance();

	return 0;

}
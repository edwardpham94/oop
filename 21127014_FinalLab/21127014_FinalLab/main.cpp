#include"function.h"

SanThuongMai* SanThuongMai::instance = NULL;

void main()
{
	SanThuongMai* object = SanThuongMai::GetInstance();

	object->readCuaHang();

	object->readKhachHang();

	object->readMaGiamGia();

	object->mainMenu();

	SanThuongMai::DeleteInstance();
}
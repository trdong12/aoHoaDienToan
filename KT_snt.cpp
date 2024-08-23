#include <iostream>
#include <conio.h>
bool laSoNguyenTo(int n) {
	if (n <= 1) return false;

	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int soNhap;
	std::cout << "Nhap mot so nguyen: ";
	std::cin >> soNhap;

	if (laSoNguyenTo(soNhap)) {
		std::cout << soNhap << " la so nguyen to." << std::endl;
	}
	else {
		std::cout << soNhap << " khong phai la so nguyen to." << std::endl;
	}
	_getch();
	return 0;
}

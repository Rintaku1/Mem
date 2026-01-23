#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int a, count = 0;
	cout << "[+] Введите число: " << endl;
	cin >> a;

	if (a == 0) {
		count = 1;
	}
	else {
		while (a > 0) {
			a /= 10;
			count++;
		}
	}
	cout << "[+] Кол-во цифр: " << count << endl;
	return 0;
}

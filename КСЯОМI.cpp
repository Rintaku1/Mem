#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a;
	cout << "[+] Введите число : " << endl;
	cin >> a;
	if (a >= 0 and a <= 10) {
		cout << "[+] Цифра в диапазоне: 0 - 10 " << endl;
	}
	else if (a >= 11 and a <= 20) {
		cout << "[+] Цифра в диапазоне: 11 - 20 " << endl;
	}
	else if (a >= 21 and a <= 30) {
		cout << "[+] Цифра в диапазоне: 21 - 30 " << endl;
	}
	else if (a >= 31 and a <= 40) {
		cout << "[+] Цифра в диапазоне: 31 - 40 " << endl;
	}
	else if (a >= 41 and a <= 50) {
		cout << "[+] Цифра в диапазоне: 41 - 50 " << endl;
	}
	else if (a >= 51 and a <= 60) {
		cout << "[+] Цифра в диапазоне: 51 - 60 " <<  endl;
	}
	else if (a >= 61 and a <= 70) {
		cout << "[+] Цифра в диапазоне: 61 - 70 " <<  endl;
	}
	else if (a >= 71 and a <= 80) {
		cout << "[+] Цифра в диапазоне: 71 - 80 " <<  endl;
	}
	else if (a >= 81 and a <= 90) {
		cout << "[+] Цифра в диапазоне: 81 - 90 " <<  endl;
	}
	else if (a >= 91 and a <= 100) {
		cout << "[+] Цифра в диапазоне: 91 - 100 " <<  endl;
	}
	else if (a < 0) {
		cout << "[+] Ошибка! Число меньше 0." << endl;
	}
	else if(a > 100) {
		cout << "[+] Ошибка! Число больше 100." << endl;
	}
	return 0;
}


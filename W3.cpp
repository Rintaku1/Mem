#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int num, count = 0, sum = 0;

	while (true) {
		cout << "[+] Введите число: " << endl;
		cin >> num;

		if (num == 0) {
			break;
		}
		if (num > 0) {
			count++;
			sum += num;
		}
	}
	cout << "[-] Кол-во чисел: " << count << endl;
	cout << "[-] Сумма: " << sum << endl;
	return 0;
}

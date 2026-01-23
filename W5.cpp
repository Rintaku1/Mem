#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	int a;

	cout << "[+] Введите число: " << endl;
	cin >> a;

	int i = 1;
	while (i <= 10) {
		cout << "[+] " << a << " * " << i << " = " << a * i << endl;
		i++;
	}
	return 0;
}

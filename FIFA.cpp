#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(0, "");
	int answer;
	cout << "[-] " << "Программа <Времена года>" << endl;
	cout << endl;
	cout << "[1] " << "Лето" << endl; 
	cout << "[2] " << "Осень" << endl;
	cout << "[3] " << "Зима" << endl;
	cout << "[4] " << "Весна" << endl;
	cin >> answer;
	try answer
	if (answer == 1) {
		cout << "Сейчас лето, следует одеться открыто и одеть тапочки."
	}
	else if (answer == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт."
	}
	else if (answer == 3) {
		cout << "Сейчас зима, следует одеться теплее и одеть шапку."
	}
	else if (answer == 4) {
		cout << "Сейчас весна, следует одеться легко, но взять курточку."
	}
	else {
		cout << "Внимание! Такого времени года нет."
	}
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "1 январь" << endl << "2 феварь" << endl << "3 март" << endl << "4 апрель" << endl << "5 май" << endl << "6 июнь" << endl << "7 июль" << endl << "8 август" << endl << "9 сентябрь" << endl << "10 октябрь" << endl << "11 ноябрь" << endl << "12 декабрь" << endl;
	int a;
	cin >> a;
	switch (a) {
		case 1:
			cout << "выбран январь";
			break;
		case 2:
			cout << "выбран февраль";
			break;
		case 3:
			cout << "выбран марть";
			break;
		case 4:
			cout << "выбран апрель";
			break;
		case 5:
			cout << "выбран май";
			break;
		case 6:
			cout << "выбран июнь";
			break;
		case 7:
			cout << "выбран июль";
			break;
		case 8:
			cout << "выбран август";
			break;
		case 9:
			cout << "выбран сентябрь";
			break;
		case 10:
			cout << "выбран октябрь";
			break;
		case 11:
			cout << "выбран ноябрь";
			break;
		case 12:
			cout << "выбран декабрь";
			break;
		default:
			cout << "error";
			break;
		}
	return 0;
}

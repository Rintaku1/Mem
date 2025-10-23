#include <iostream>
#include <string>
using namespace std;
int main() {
	int month, day;
	cout << "[ + ] Календарь" << endl;
	cout << "[ 1 ] Январь" << endl;
	cout << "[ 2 ] Февраль" << endl;
	cout << "[ 3 ] Март" << endl;
	cout << "[ 4 ] Апрель" << endl;
	cout << "[ 5 ] Май" << endl;
	cout << "[ 6 ] Июнь" << endl;
	cout << "[ 7 ] Июль" << endl;
	cout << "[ 8 ] Август" << endl;
	cout << "[ 9 ] Сентябрь" << endl;
	cout << "[ 10 ] Октябрь" << endl;
	cout << "[ 11 ] Ноябрь" << endl;
	cout << "[ 12 ] Декабрь" << endl;
	cout << "[ + ] Выберите месяц: " << endl;
	cin >> month;
	string monthName;
	switch (month) {
	case 1: monthName = "Январь";  break;
	case 2: monthName = "Февраль"; break;
	case 3: monthName = "Март"; break;
	case 4: monthName = "Апрель"; break;
	case 5: monthName = "Май"; break;
	case 6: monthName = "Июнь"; break;
	case 7: monthName = "Июль"; break;
	case 8: monthName = "Август"; break;
	case 9: monthName = "Сентрябрь"; break;
	case 10: monthName = "Октябрь"; break;
	case 11: monthName = "Ноябрь"; break;
	case 12: monthName = "Декабрь"; break;
	default:
		cout << "[ ! ] Ошибка: неверный номер месяца!" << endl;
		return 1;
	}
	cout << "[ + ] Выбран месяц - \"" << monthName << "\"" << endl;
	cout << "[ + ] Выберите день месяца: ";
	cin >> day;
	return 0;
}

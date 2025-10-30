#include <iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "[ + ] Введите число: ";
        cin >> number;

        if (number == 0) {
            cout << "[ + ] Программа завершена." << endl;
            break;
        }

        if (number < 1 || number > 15) {
            cout << "[ ! ] Ошибка: число должно быть от 1 до 15!" << endl;
            continue;
        }

        cout << "[ + ] Цикл \"WHILE\"" << endl << endl;

        int count = 1;
        while (count <= number) {
            cout << "[ + ] Цикл отработал. Круг: " << count << "." << endl;
            count++;
        }

        cout << endl; 
    }

    return 0;
}

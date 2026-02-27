#include <iostream>
#include <cstdlib>
using namespace std;
void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void drawPlus(int size, char texture) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == size / 2 || j == size / 2) {
                cout << " " << texture << " ";
            }
            else {
                cout << " . ";
            }
        }
        cout << endl;
    }
}

int main() {
    int choice;
    int size;
    char texture;

    cout << "[ 18 ] Самостоятельная работа | E+" << endl;
    cout << "Тема: [ FOR ]" << endl;
    cout << "Продолжение программы \"Геометрические фигуры\"." << endl;
    cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl;
    cout << "...." << endl;
    cout << "[ 6 ] Крестик" << endl;
    cout << "[ 7 ] Плюс" << endl;
    cout << endl;
    cout << "[ + ] Выберите фигуру: ";
    cin >> choice;

    clearConsole();

    if (choice == 7) {
        cout << "[ + ] Фигура: \"Плюс\"" << endl;
        cout << endl;
        cout << "[ + ] Размер: \t";
        cin >> size;
        cout << endl;
        cout << "[ + ] Текстура: \t";
        cin >> texture;
        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;
        drawPlus(size, texture);
    }
    else if (choice == 6) {
        cout << "[ + ] Фигура: \"Крестик\"" << endl;
        cout << endl;
        cout << "Эта фигура будет реализована позже." << endl;
    }
    else {
        cout << "[ ! ] Неверный выбор фигуры!" << endl;
    }

    return 0;
}

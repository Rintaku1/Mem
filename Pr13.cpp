#include <iostream>
#include <string>
#include <limits>

using namespace std;

void clearConsole() {
    for (int i = 0; i < 50; i++) {
        cout << endl;
    }
}

void printFilledSquare(int size, char texture) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << texture << "   ";
        }
        cout << endl;
    }
}

void printEmptySquare(int size, char texture) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << texture << "   ";
            }
            else {
                cout << "    ";
            }
        }
        cout << endl;
    }
}

int main() {
    int figureChoice, typeChoice, size;
    char texture;

    cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl;
    cout << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << endl;
    cout << "[ + ] Выберите фигуру: ";
    cin >> figureChoice;

    clearConsole();

    if (figureChoice == 2) { 
        cout << "[ + ] Фигура: \"Квадрат\"" << endl;
        cout << endl;

        cout << "[ 1 ] Заполненный" << endl;
        cout << "[ 2 ] Пустой" << endl;
        cout << endl;
        cout << "[ + ] Выберите тип: ";
        cin >> typeChoice;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;
        cout << "[ + ] Размер: ";
        cin >> size;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl;
        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << endl;
        cout << "[ + ] Результат:" << endl;
        cout << endl;

        if (typeChoice == 1) {
            printFilledSquare(size, texture);
        }
        else if (typeChoice == 2) {
            printEmptySquare(size, texture);
        }
        else {
            cout << "Ошибка: неверный выбор типа!" << endl;
        }
    }
    else if (figureChoice == 1) {
        cout << "Функция 'Линия' еще не реализована" << endl;
    }
    else {
        cout << "Ошибка: неверный выбор фигуры!" << endl;
    }

    return 0;
}

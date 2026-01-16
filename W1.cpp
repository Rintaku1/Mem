#include <iostream>
using namespace std;

void drawHorizontalLine(int length, string texture) {
    for (int i = 0; i < length; i++) {
        cout << texture;
    }
    cout << endl;
}

void drawVerticalLine(int length, string texture) {
    for (int i = 0; i < length; i++) {
        cout << texture << endl;
    }
}

void drawFilledSquare(int size, string texture) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << texture << " ";
        }
        cout << endl;
    }
}

void drawEmptySquare(int size, string texture) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1) {
                cout << texture << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    setlocale(0, "");
    int choice;
    int choicetype;
    int length;
    int size;
    string texture;

    do {
        cout << "[+] Программа - \"Геометрические фигуры\"\n\n";
        cout << "[1] Линия\n";
        cout << "[2] Квадрат\n";
        cout << "[3] Выход\n";
        cout << "[+] Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            system("cls");
            cout << "Фигура: 'Линия'\n";
            cout << "[1] Горизонтальная\n";
            cout << "[2] Вертикальная\n";
            cout << "[+] Выберите тип: ";
            cin >> choicetype;

            if (choicetype == 1 || choicetype == 2) {
                system("cls");
                cout << "Длина линии: ";
                cin >> length;
                cout << "Текстура линии: ";
                cin >> texture;
                cout << "Результат:\n";

                if (choicetype == 1) {
                    drawHorizontalLine(length, texture);
                }
                else {
                    drawVerticalLine(length, texture);
                }

                cout << "\nНажмите Enter для продолжения...";
                cin.ignore();
                cin.get();
            }
            else {
                cout << "Нет такого значения!\n";
            }
            system("cls");
            break;
        }

        case 2:
            system("cls");
            cout << "Фигура: 'Квадрат'\n";
            cout << "[1] Заполненный\n";
            cout << "[2] Пустой\n";
            cout << "[+] Выберите тип: ";
            cin >> choicetype;

            if (choicetype == 1 || choicetype == 2) {
                system("cls");
                cout << "Размер квадрата: ";
                cin >> size;
                cout << "Текстура: ";
                cin >> texture;
                cout << "Результат:\n";

                if (choicetype == 1) {
                    drawFilledSquare(size, texture);
                }
                else {
                    drawEmptySquare(size, texture);
                }

                cout << "\nНажмите Enter для продолжения...";
                cin.ignore();
                cin.get();
            }
            else {
                cout << "Нет такого значения!\n";
            }
            system("cls");
            break;
        }

        case 3: {
            cout << "Выход из программы...\n";
            break;
        }

        default: {
            system("cls");
            cout << "Нет такого значения! Повторите попытку\n\n";
            break;
        }
        }
    } while (choice != 3);

    return 0;
}

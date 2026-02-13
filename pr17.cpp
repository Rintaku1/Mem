#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int vibor;

    cout << "[ + ] Программа - \"Геометрические фигуры\"\n";
    cout << "....\n";
    cout << "[ 5 ] Решетка\n";
    cout << "[ 6 ] Крестик\n";
    cout << "[ + ] Выберите фигуру: ";
    cin >> vibor;

    if (vibor == 6) {
        system("cls");

        cout << "[ + ] Фигура: \"Крестик\"\n\n";

        int razmer;
        char tekstura;

        cout << "[ + ] Размер: \t";
        cin >> razmer;

        cout << "[ + ] Текстура: \t";
        cin >> tekstura;

        cout << "\n[ + ] Результат:\n\n";

        for (int i = 0; i < razmer; i++) {
            for (int j = 0; j < razmer; j++) {
                if (i == j || i + j == razmer - 1) {
                    cout << tekstura;
                }
                else {
                    cout << ".";
                }
                if (j < razmer - 1) {
                    cout << "\t";
                }
            }
            cout << endl;
        }
    }

    cout << endl;
    system("pause");
    return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>  
using namespace std;

void clearScreen();
void line();
void square();
void rectangle();
void triangle();
void grid();

int main() {
    int choice;

    do {
        clearScreen();

        cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl << endl;
        cout << "[ 1 ] Линия" << endl;
        cout << "[ 2 ] Квадрат" << endl;
        cout << "[ 3 ] Прямоугольник" << endl;
        cout << "[ 4 ] Треугольник" << endl;
        cout << "[ 5 ] Решетка" << endl;
        cout << "[ 0 ] Выход" << endl << endl;

        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;

        clearScreen();

        switch (choice) {
        case 1:
            cout << "[ + ] Фигура: \"Линия\"" << endl << endl;
            line();
            break;
        case 2:
            cout << "[ + ] Фигура: \"Квадрат\"" << endl << endl;
            square();
            break;
        case 3:
            cout << "[ + ] Фигура: \"Прямоугольник\"" << endl << endl;
            rectangle();
            break;
        case 4:
            cout << "[ + ] Фигура: \"Треугольник\"" << endl << endl;
            triangle();
            break;
        case 5:
            cout << "[ + ] Фигура: \"Решетка\"" << endl << endl;
            grid();
            break;
        case 0:
            cout << "Выход из программы..." << endl;
            break;
        default:
            cout << "Неверный выбор!" << endl;
        }

        if (choice != 0) {
            cout << endl << "Нажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 0);

    return 0;
}

void clearScreen() {
    system("cls"); 
}

void line() {
    int length;
    char texture;

    cout << "[ + ] Размер: \t";
    cin >> length;
    cout << "[ + ] Текстура: \t";
    cin >> texture;

    cout << endl << "[ + ] Результат:" << endl << endl;

    for (int i = 0; i < length; i++) {
        cout << texture;
    }
    cout << endl;
}

void square() {
    int size;
    char texture;

    cout << "[ + ] Размер: \t";
    cin >> size;
    cout << "[ + ] Текстура: \t";
    cin >> texture;

    cout << endl << "[ + ] Результат:" << endl << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << texture << " ";
        }
        cout << endl;
    }
}

void rectangle() {
    int width, height;
    char texture;

    cout << "[ + ] Ширина: \t";
    cin >> width;
    cout << "[ + ] Высота: \t";
    cin >> height;
    cout << "[ + ] Текстура: \t";
    cin >> texture;

    cout << endl << "[ + ] Результат:" << endl << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << texture << " ";
        }
        cout << endl;
    }
}

void triangle() {
    int height;
    char texture;
    int type;

    cout << "[ 1 ] Заполненный" << endl;
    cout << "[ 2 ] Пустой" << endl;
    cout << endl << "[ + ] Выберите тип: ";
    cin >> type;

    cout << "[ + ] Размер (высота): \t";
    cin >> height;
    cout << "[ + ] Текстура: \t\t";
    cin >> texture;

    cout << endl << "[ + ] Результат:" << endl << endl;

    if (type == 1) {  
        for (int i = 1; i <= height; i++) {
            for (int j = 0; j < height - i; j++) {
                cout << "  ";
            }
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << texture << " ";
            }
            cout << endl;
        }
    }
    else if (type == 2) {  
        for (int i = 1; i <= height; i++) {
            for (int j = 0; j < height - i; j++) {
                cout << "  ";
            }

            if (i == 1) {
                cout << texture;
            }
            else if (i == height) {
                for (int j = 0; j < 2 * i - 1; j++) {
                    cout << texture << " ";
                }
            }
            else {
                cout << texture;
                for (int j = 0; j < 2 * (i - 1) - 1; j++) {
                    cout << "  ";
                }
                cout << texture;
            }
            cout << endl;
        }
    }
    else {
        cout << "Неверный тип треугольника!" << endl;
    }
}

void grid() {
    int size;
    char texture;

    cout << "[ + ] Размер: \t";
    cin >> size;
    cout << "[ + ] Текстура: \t";
    cin >> texture;

    cout << endl << "[ + ] Результат:" << endl << endl; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
            if ((i + j) % 2 == 0) {
                cout << texture << " ";
            }
            else {
                cout << ". "; 
            }
        }
        cout << endl;
    }
}

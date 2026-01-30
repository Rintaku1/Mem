#include <iostream>
#include <string>
#include <limits>

using namespace std;

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printHeader(const string& title) {
    clearConsole();
    cout << "[ + ] Фигура: \"" << title << "\"" << endl << endl;
}

void printResultHeader() {
    cout << "\n[ + ] Результат:\n\n";
}

void drawLine(int width, char texture) {
    for (int i = 0; i < width; i++) {
        cout << texture << "   ";
    }
    cout << endl;
}

void drawFilledRectangle(int width, int height, char texture) {
    for (int i = 0; i < height; i++) {
        drawLine(width, texture);
    }
}

void drawEmptyRectangle(int width, int height, char texture) {
    drawLine(width, texture);

    for (int i = 0; i < height - 2; i++) {
        cout << texture << "   ";
        for (int j = 0; j < width - 2; j++) {
            cout << ".    ";
        }
        if (width > 1) {
            cout << texture;
        }
        cout << endl;
    }

    if (height > 1) {
        drawLine(width, texture);
    }
}

int main() {
    int choice, type, width, height;
    char texture;
    string figureName;

    clearConsole();
    cout << "[ + ] Программа - \"Геометрические фигуры\"" << endl << endl;
    cout << "[ 1 ] Линия" << endl;
    cout << "[ 2 ] Квадрат" << endl;
    cout << "[ 3 ] Прямоугольник" << endl << endl;
    cout << "[ + ] Выберите фигуру: ";
    cin >> choice;
    while (choice < 1 || choice > 3) {
        cout << "Ошибка! Введите число от 1 до 3: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> choice;
    }

    switch (choice) {
    case 1:
        figureName = "Линия";
        break;
    case 2:
        figureName = "Квадрат";
        break;
    case 3:
        figureName = "Прямоугольник";
        break;
    }

    printHeader(figureName);

    cout << "[ 1 ] Заполненный" << endl;
    cout << "[ 2 ] Пустой" << endl << endl;
    cout << "[ + ] Выберите тип: ";
    cin >> type;

    while (type < 1 || type > 2) {
        cout << "Ошибка! Введите 1 или 2: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> type;
    }

    cout << endl;
    cout << "[ + ] Ширина: ";
    cin >> width;

    while (width < 1) {
        cout << "Ошибка! Ширина должна быть положительным числом: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> width;
    }

    if (choice == 3) {
        cout << "[ + ] Высота: ";
        cin >> height;

        while (height < 1) {
            cout << "Ошибка! Высота должна быть положительным числом: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> height;
        }
    }
    else if (choice == 2) { 
        height = width;
    }
    else { 
        height = 1;
    }

    cout << "[ + ] Текстура: ";
    cin >> texture;

    printResultHeader();

    if (choice == 1) {
        drawLine(width, texture);
    }
    else if (choice == 2 || choice == 3) {
        if (type == 1) {
            drawFilledRectangle(width, height, texture);
        }
        else {
            drawEmptyRectangle(width, height, texture);
        }
    }

    cout << endl;
    return 0;
}

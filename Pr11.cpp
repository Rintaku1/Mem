#include <iostream>
#include <string>
#include <limits>

using namespace std;

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void waitForEnter() {
    cout << "\n[ + ] Нажмите Enter для продолжения...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void drawHorizontalLine(int length, char texture) {
    cout << "[ + ] Результат:\n";
    for (int i = 0; i < length; i++) {
        cout << texture << " ";
    }
    cout << endl;
}

void drawVerticalLine(int length, char texture) {
    cout << "[ + ] Результат:\n";
    for (int i = 0; i < length; i++) {
        cout << texture << endl;
    }
}

void drawRectangle(int width, int height, char texture) {
    cout << "[ + ] Результат:\n";
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << texture << " ";
        }
        cout << endl;
    }
}

void drawTriangle(int height, char texture) {
    cout << "[ + ] Результат:\n";
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < i; j++) {
            cout << texture << " ";
        }
        cout << endl;
    }
}

void lineMenu() {
    int type;
    int length;
    char texture;
    
    cout << "[ + ] Фигура: \"Линия\"\n\n";
    cout << "[ 1 ] Горизонтальная\n";
    cout << "[ 2 ] Вертикальная\n\n";
    cout << "[ + ] Выберите тип: ";
    cin >> type;
    
    cout << "[ + ] Длина линии: ";
    cin >> length;
    cout << "[ + ] Текстура линии: ";
    cin >> texture;
    
    clearScreen();
    
    if (type == 1) {
        drawHorizontalLine(length, texture);
    } else if (type == 2) {
        drawVerticalLine(length, texture);
    } else {
        cout << "[ ! ] Неверный тип линии!\n";
    }
}

void rectangleMenu() {
    int width, height;
    char texture;
    
    cout << "[ + ] Фигура: \"Прямоугольник\"\n\n";
    cout << "[ + ] Ширина прямоугольника: ";
    cin >> width;
    cout << "[ + ] Высота прямоугольника: ";
    cin >> height;
    cout << "[ + ] Текстура прямоугольника: ";
    cin >> texture;
    
    clearScreen();
    drawRectangle(width, height, texture);
}

void triangleMenu() {
    int height;
    char texture;
    
    cout << "[ + ] Фигура: \"Треугольник\"\n\n";
    cout << "[ + ] Высота треугольника: ";
    cin >> height;
    cout << "[ + ] Текстура треугольника: ";
    cin >> texture;
    
    clearScreen();
    drawTriangle(height, texture);
}

int main() {
    int choice;
    bool running = true;
    
    while (running) {
        clearScreen();
        
        cout << "[ + ] Программа - \"Геометрические фигуры\"\n\n";
        cout << "[ 1 ] Линия\n";
        cout << "[ 2 ] Прямоугольник\n";
        cout << "[ 3 ] Треугольник\n";
        cout << "[ 0 ] Выход\n\n";
        cout << "[ + ] Выберите фигуру: ";
        cin >> choice;
        
        if (choice == 0) {
            running = false;
            continue;
        }
        
        clearScreen();
        
        switch (choice) {
            case 1:
                lineMenu();
                break;
            case 2:
                rectangleMenu();
                break;
            case 3:
                triangleMenu();
                break;
            default:
                cout << "[ ! ] Неверный выбор!\n";
                break;
        }
        
        if (choice >= 1 && choice <= 3) {
            waitForEnter();
        }
    }
    
    cout << "[ + ] Программа завершена. До свидания!\n";
    return 0;
}

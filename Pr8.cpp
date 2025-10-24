#include <iostream>
using namespace std;

int main() {
    int choice, wordChoice;

    do {
        cout << "\n[ + ] Переводчик\n\n";
        cout << "[ 1 ] Русские слова\n";
        cout << "[ 2 ] Английские слова\n";
        cout << "[ 3 ] Выйти\n\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\n[ + ] Переводчик \"Список русских слов\"\n\n";
            cout << "[ 1 ] Дом\n";
            cout << "[ 2 ] Дорога\n";
            cout << "[ 3 ] Книга\n";
            cout << "[ 4 ] Солнце\n";
            cout << "[ 5 ] Вода\n";
            cout << "[ 6 ] Окно\n";
            cout << "[ 7 ] Стол\n";
            cout << "[ 8 ] Стул\n";
            cout << "[ 9 ] Город\n";
            cout << "[ 10 ] Машина\n";
            cout << "[ 11 ] Дерево\n";
            cout << "[ 12 ] Цветок\n";
            cout << "[ 13 ] Школа\n";
            cout << "[ 14 ] Работа\n";
            cout << "[ 15 ] Друг\n\n";
            cout << "Выберите номер слова: ";
            cin >> wordChoice;

            switch (wordChoice) {
            case 1: cout << "[ + ] Перевод: дом -> house" << endl; break;
            case 2: cout << "[ + ] Перевод: дорога -> road" << endl; break;
            case 3: cout << "[ + ] Перевод: книга -> book" << endl; break;
            case 4: cout << "[ + ] Перевод: солнце -> sun" << endl; break;
            case 5: cout << "[ + ] Перевод: вода -> water" << endl; break;
            case 6: cout << "[ + ] Перевод: окно -> window" << endl; break;
            case 7: cout << "[ + ] Перевод: стол -> table" << endl; break;
            case 8: cout << "[ + ] Перевод: стул -> chair" << endl; break;
            case 9: cout << "[ + ] Перевод: город -> city" << endl; break;
            case 10: cout << "[ + ] Перевод: машина -> car" << endl; break;
            case 11: cout << "[ + ] Перевод: дерево -> tree" << endl; break;
            case 12: cout << "[ + ] Перевод: цветок -> flower" << endl; break;
            case 13: cout << "[ + ] Перевод: школа -> school" << endl; break;
            case 14: cout << "[ + ] Перевод: работа -> work" << endl; break;
            case 15: cout << "[ + ] Перевод: друг -> friend" << endl; break;
            default: cout << "[ ! ] Ошибка: неверный номер слова!" << endl;
            }
            break;

        case 2:
            cout << "\n[ + ] Переводчик \"Список английских слов\"\n\n";
            cout << "[ 1 ] House\n";
            cout << "[ 2 ] Road\n";
            cout << "[ 3 ] Book\n";
            cout << "[ 4 ] Sun\n";
            cout << "[ 5 ] Water\n";
            cout << "[ 6 ] Window\n";
            cout << "[ 7 ] Table\n";
            cout << "[ 8 ] Chair\n";
            cout << "[ 9 ] City\n";
            cout << "[ 10 ] Car\n";
            cout << "[ 11 ] Tree\n";
            cout << "[ 12 ] Flower\n";
            cout << "[ 13 ] School\n";
            cout << "[ 14 ] Work\n";
            cout << "[ 15 ] Friend\n\n";
            cout << "Выберите номер слова: ";
            cin >> wordChoice;

            switch (wordChoice) {
            case 1: cout << "[ + ] Перевод: house -> дом" << endl; break;
            case 2: cout << "[ + ] Перевод: road -> дорога" << endl; break;
            case 3: cout << "[ + ] Перевод: book -> книга" << endl; break;
            case 4: cout << "[ + ] Перевод: sun -> солнце" << endl; break;
            case 5: cout << "[ + ] Перевод: water -> вода" << endl; break;
            case 6: cout << "[ + ] Перевод: window -> окно" << endl; break;
            case 7: cout << "[ + ] Перевод: table -> стол" << endl; break;
            case 8: cout << "[ + ] Перевод: chair -> стул" << endl; break;
            case 9: cout << "[ + ] Перевод: city -> город" << endl; break;
            case 10: cout << "[ + ] Перевод: car -> машина" << endl; break;
            case 11: cout << "[ + ] Перевод: tree -> дерево" << endl; break;
            case 12: cout << "[ + ] Перевод: flower -> цветок" << endl; break;
            case 13: cout << "[ + ] Перевод: school -> школа" << endl; break;
            case 14: cout << "[ + ] Перевод: work -> работа" << endl; break;
            case 15: cout << "[ + ] Перевод: friend -> друг" << endl; break;
            default: cout << "[ ! ] Ошибка: неверный номер слова!" << endl;
            }
            break;

        case 3:
            cout << "\n[ + ] Выход из программы. До свидания!" << endl;
            break;

        default:
            cout << "\n[ ! ] Ошибка: неверный пункт меню!" << endl;
        }

        if (choice != 3) {
            cout << "\nНажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 3);

    return 0;
}

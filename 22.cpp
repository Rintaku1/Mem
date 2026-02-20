#include <iostream>
#include <string>
using namespace std;

int main() {
    int arrInt[10] = { 1, 20, 32, 4, 1, 2, 2, 54, 23, 0 };
    short arrShort[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
    long arrLong[10] = { 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000 };
    float arrFloat[10] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.1f };
    double arrDouble[10] = { 1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.11 };
    char arrChar[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
    bool arrBool[10] = { true, false, true, false, true, false, true, false, true, false };
    string arrString[10] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten" };
    cout << "[ + ] Массив INT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrInt [ " << i << " ]\t| значение: " << arrInt[i] << endl;
    }
    cout << endl;
    cout << "[ + ] Массив SHORT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrShort [ " << i << " ]\t| значение: " << arrShort[i] << endl;
    }
    cout << endl;
    cout << "[ + ] Массив LONG:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrLong [ " << i << " ]\t| значение: " << arrLong[i] << endl;
    }
    cout << endl;
    cout << "[ + ] Массив FLOAT:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrFloat [ " << i << " ]\t| значение: " << arrFloat[i] << endl;
    }
    cout << endl;
    cout << "[ + ] Массив DOUBLE:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrDouble [ " << i << " ]\t| значение: " << arrDouble[i] << endl;
    }
    cout << endl;
    cout << "[ + ] Массив CHAR:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrChar [ " << i << " ]\t| значение: " << arrChar[i] << endl;
    }
    cout << endl;
    cout << "[ + ] Массив BOOL:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrBool [ " << i << " ]\t| значение: " << (arrBool[i] ? "true" : "false") << endl;
    }
    cout << endl;
    cout << "[ + ] Массив STRING:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[ + ] arrString [ " << i << " ]\t| значение: " << arrString[i] << endl;
    }
  return 0;
}

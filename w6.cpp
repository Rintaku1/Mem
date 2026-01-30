#include <iostream>

int main() {
    double sum = 0.0;
    int count = 0;
    double number;

    std::cout << "[ + ] Введите число: ";
    std::cin >> number;

    while (number != 0) {
        sum += number;
        count++;

        std::cout << "[ + ] Введите число: ";
        std::cin >> number;
    }

    if (count > 0) {
        double average = sum / count;
        std::cout << "[ + ] Среднее арифметическое: " << average << std::endl;
    }
    else {
        std::cout << "[ + ] Не введено ни одного числа (кроме нуля)" << std::endl;
    }

    return 0;
}

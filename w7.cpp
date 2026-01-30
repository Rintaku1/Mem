#include <iostream>
#include <string>

int main() {
    const std::string correctPassword = "12345";
    std::string userPassword;

    do {
        std::cout << "[ + ] Введите пароль: ";
        std::cin >> userPassword;

        if (userPassword != correctPassword) {
            std::cout << "[ - ] Неверный пароль!" << std::endl;
        }
    } while (userPassword != correctPassword);

    std::cout << "[ + ] Добро пожаловать!" << std::endl;

    return 0;
}

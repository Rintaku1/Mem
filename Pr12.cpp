#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Question {
    string question;
    vector<string> options;
    int correctAnswer;
};

string playerName = "Игрок";
int score = 0;
int lives = 3;
vector<Question> questions;

void initializeQuestions() {
    questions = {
        {"Какой язык программирования мы используем?",
         {"Python", "Java", "C++", "JavaScript"}, 2},

        {"Что означает HTML?",
         {"Hyper Text Markup Language", "High Tech Modern Language",
          "Home Tool Markup Language", "Hyper Transfer Markup Language"}, 0},

        {"Какой оператор используется для вывода в C++?",
         {"print", "echo", "cout", "printf"}, 2},

        {"Что такое переменная?",
         {"Константное значение", "Именованная область памяти",
          "Функция", "Тип данных"}, 1},

        {"Какой цикл выполняется пока условие истинно?",
         {"for", "while", "do-while", "Все вышеперечисленные"}, 3},

        {"Что возвращает функция main() в C++?",
         {"void", "string", "int", "bool"}, 2},

        {"Какой размер у типа int в C++?",
         {"8 бит", "16 бит", "32 бит", "Зависит от компилятора"}, 3},

        {"Что такое ООП?",
         {"Объектно-Ориентированное Программирование",
          "Основные Операции Процессора",
          "Общая Организация Проекта",
          "Оптимальное Объемное Программирование"}, 0}
    };
}

void showMenu() {
    cout << "\n=== ГЛАВНОЕ МЕНЮ ===\n";
    cout << "1. Начать игру\n";
    cout << "2. Настройки\n";
    cout << "3. Правила\n";
    cout << "4. Выйти\n";
    cout << "Выберите пункт: ";
}

void showRules() {
    cout << "\n=== ПРАВИЛА ИГРЫ ===\n";
    cout << "1. Игрок получает очки за правильный ответ на вопрос\n";
    cout << "2. Игрок проходит дальше за правильный ответ\n";
    cout << "3. Игрок теряет жизнь при неправильном ответе\n";
    cout << "4. Начальное количество жизней: 3\n";
    cout << "5. Игра продолжается пока есть жизни\n\n";

    cout << "Нажмите 0 чтобы вернуться в главное меню: ";
    int choice;
    cin >> choice;
    while (choice != 0) {
        cout << "Пожалуйста, введите 0 для возврата: ";
        cin >> choice;
    }
}

void showSettings() {
    int choice;
    do {
        cout << "\n=== НАСТРОЙКИ ===\n";
        cout << "1. Редактирование имени игрока\n";
        cout << "2. Вернуться в главное меню\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Введите новое имя игрока: ";
            cin.ignore();
            getline(cin, playerName);
            cout << "Имя успешно изменено на: " << playerName << endl;
        }
        else if (choice != 2) {
            cout << "Неверный выбор! Попробуйте снова.\n";
        }
    } while (choice != 2);
}

void startGame() {
    score = 0;
    lives = 3;

    cout << "\n=== НАЧАЛО ИГРЫ ===\n";
    cout << "Добро пожаловать, " << playerName << "!\n";
    cout << "У вас " << lives << " жизней. Удачи!\n\n";

    srand(time(0));
    vector<Question> shuffledQuestions = questions;
    for (size_t i = 0; i < shuffledQuestions.size(); i++) {
        int randomIndex = rand() % shuffledQuestions.size();
        swap(shuffledQuestions[i], shuffledQuestions[randomIndex]);
    }

    int questionIndex = 0;

    while (lives > 0 && questionIndex < shuffledQuestions.size()) {
        Question currentQuestion = shuffledQuestions[questionIndex];

        cout << "Вопрос " << (questionIndex + 1) << ": " << currentQuestion.question << endl;
        cout << "Варианты ответов:\n";

        for (size_t i = 0; i < currentQuestion.options.size(); i++) {
            cout << (i + 1) << ". " << currentQuestion.options[i] << endl;
        }

        cout << "\nВаш ответ (1-4): ";
        int userAnswer;
        cin >> userAnswer;

        while (userAnswer < 1 || userAnswer > 4) {
            cout << "Неверный ввод! Введите число от 1 до 4: ";
            cin >> userAnswer;
        }

        if (userAnswer - 1 == currentQuestion.correctAnswer) {
            cout << "Правильно! +10 очков!\n";
            score += 10;
        }
        else {
            cout << "Неправильно! Правильный ответ: "
                << (currentQuestion.correctAnswer + 1) << ". "
                << currentQuestion.options[currentQuestion.correctAnswer] << endl;
            lives--;
            cout << "Осталось жизней: " << lives << endl;
        }

        cout << "Текущий счет: " << score << " очков\n\n";
        questionIndex++;

        if (questionIndex < shuffledQuestions.size() && lives > 0) {
            cout << "Нажмите Enter для продолжения...";
            cin.ignore();
            cin.get();
        }
    }

    cout << "\n=== ИГРА ОКОНЧЕНА ===\n";
    cout << "Игрок: " << playerName << endl;
    cout << "Финальный счет: " << score << " очков\n";
    cout << "Отвечено вопросов: " << questionIndex << " из " << shuffledQuestions.size() << endl;

    if (lives == 0) {
        cout << "Вы проиграли! Закончились жизни.\n";
    }
    else {
        cout << "Поздравляем! Вы ответили на все вопросы!\n";
    }

    cout << "\nНажмите Enter чтобы вернуться в меню...";
    cin.ignore();
    cin.get();
}

int main() {
    initializeQuestions();

    cout << "=== ДОБРО ПОЖАЛОВАТЬ В ВИКТОРИНУ! ===\n";
    cout << "Проверьте свои знания в программировании и IT!\n";

    int choice;
    bool exitProgram = false;

    while (!exitProgram) {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            startGame();
            break;
        case 2:
            showSettings();
            break;
        case 3:
            showRules();
            break;
        case 4:
            cout << "Спасибо за игру! До свидания!\n";
            exitProgram = true;
            break;
        default:
            cout << "Неверный выбор! Попробуйте снова.\n";
            break;
        }
    }

    return 0;
}

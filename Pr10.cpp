#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> generateNumbers() {
    vector<int> nums;
    srand(time(0));
    while(nums.size() < 3) {
        int num = rand() % 10 + 1;
        if(find(nums.begin(), nums.end(), num) == nums.end()) {
            nums.push_back(num);
        }
    }
    return nums;
}

void startGame() {
    vector<int> secret = generateNumbers();
    vector<bool> guessed(3, false);
    int attempts = 5, correct = 0;
    
    cout << "\n=== ИГРА НАЧАЛАСЬ ===\n";
    
    while(attempts > 0 && correct < 3) {
        cout << "[+] Угаданных чисел: [" << correct << "/3]\n";
        cout << "[+] Попыток: [" << attempts << "]\n\n";
        
        int guess;
        cout << "[>] Угадать число: ";
        cin >> guess;
        
        bool found = false;
        for(int i = 0; i < 3; i++) {
            if(secret[i] == guess && !guessed[i]) {
                found = true;
                guessed[i] = true;
                correct++;
                break;
            }
        }
        
        cout << (found ? "[+] Вы угадали число!\n" : "[-] Вы не угадали число!\n");
        attempts--;
        cout << endl;
    }
    
    if(correct == 3) {
        cout << "[+] Победа! Все числа угаданы!\n";
    } else {
        cout << "[-] Поражение. Загаданные числа: ";
        for(int num : secret) cout << num << " ";
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "=== МЕНЮ ===\n1. Начать игру\n2. Выйти\nВыберите: ";
        cin >> choice;
        if(choice == 1) startGame();
    } while(choice != 2);
    
    cout << "Выход...\n";
    return 0;
}

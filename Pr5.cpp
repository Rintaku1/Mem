#include <iostream>
using namespace std;
int main() {
	char a;
	int c;
	int b;
	int o;
	cin >> a;
	cin >> c;
	cin >> b;
	switch (a) {
	case '/':
		o = c / b;
		cout << o;
		break;
	case '+':
		o = c + b;
		cout << o;
		break;
	case '-':
		o = c - b;
		cout << o;
		break;
	case '%':
		o = c % b;
		cout << o;
		break;
	case '*':
		o = c * b;
		cout << o;
		break;
	}
	return 0;
}

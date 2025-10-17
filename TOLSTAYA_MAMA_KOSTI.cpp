#include <iostream>
using namespace std;
int main()
{
	int a;
	int b = 1;
	int c= 1;
	int v = 1;
	cin >> a;
	while (b == c) {
		cout << a << " * " << v << endl;
		b = a * v;
		cin >> c;
		v++;
	}
	cout << "error";
	return 0;
}

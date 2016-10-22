#include <iostream>

using namespace std;

int main() {
	cout << "Welcome to calculator" << endl;
	cout << "Enter * or . if multiplication" << endl;
	cout << "Enter / or : if division" << endl;
	cout << "Enter + if addition" << endl;
	cout << "Enter - if subtraction" << endl;
	char operation;
	cin >> operation;
	cout << "Enter numbers" << endl;
	double a, b;
	cin >> a >> b;
	double c;
	bool ok = true;
	switch (operation) {
	case '*':
	case '.':
		c = a*b;
		break;
	case '-': 
		c = a-b;
		break;
	case '+': 
		c = a+b;
		break;
	case '/':
	case ':':
		if (b == 0)
			ok = false;
		else
			c = a / b;
		break;
	default:
		ok = false;
	}
	if (ok = true)
		cout << a << " " << operation << " " << b << " = " << c << endl;
	else 
		cout << "Input error!" << endl;
	return 0;
}

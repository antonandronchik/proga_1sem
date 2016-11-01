#include <iostream>

using namespace std;

long Factorial(int);

int main() {
	cout << "Please, enter number\n";
	int number;
	cin >> number;
	cout << "Factorial (" << number << ") = " << Factorial(number) << endl;
	return 0;
}

long Factorial(int number) {
	if (number == 0 || number == 1) 
		return 1;
		return number * Factorial(number - 1);
}

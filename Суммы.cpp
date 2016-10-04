#include <iostream>

using namespace std;

int main() 
{
	cout << "Menu" << endl;
	cout << "Enter 1 if you want to check task 1" << endl;
	cout << "Enter 2 if you want to check task 2" << endl;
	cout << "Enter 0 if you want to Exit" << endl;
	int ch;
	cin >> ch;
	int n, i = 1;
	double sum = 0;
	int exp = 2;
	if ((ch == 0) || (ch > 2))
		return 0;
	cout << "Please enter n" << endl;
	cin >> n;
		switch (ch) {
	case 1 :
		while (i <= n) {
			sum += 1.0 / i;
			i++;
		}
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 2 :
		while (i <= n - 1) {
			exp *= 2; i++;
		}
		cout << "2 ^ " << n << " = " << exp << endl;
	}
	return 0;
}

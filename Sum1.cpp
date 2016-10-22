#include <iostream>

using namespace std;

int main() {
	cout << "Menu" << endl;
	cout << "Enter 1 if you want to check task a)" << endl;
	cout << "Enter 2 if you want to check task b)" << endl;
	cout << "Enter 3 if you want to check task c)" << endl;
	cout << "Enter 4 if you want to check task d)" << endl;
	cout << "Enter 5 if you want to check task e)" << endl;
	cout << "Enter 6 if you want to check task f)" << endl;
	cout << "Enter 7 if you want to check task g)" << endl;
	cout << "Enter 8 if you want to check task h)" << endl;
	cout << "Enter 9 if you want to check task i)" << endl;
	cout << "Enter 10 if you want to check task j)" << endl;
	cout << "Enter 11 if you want to calculate the factorial of a number" << endl;
	cout << "Enter 0 if you want to Exit" << endl;
	int ch;
	cin >> ch;
	int n, i = 1;
	int i1 = 0;
	double sum = 0, pr = 1;
	double numerator = 1, denominator = 0;
	int exp = 1;
	int fct = 1;
	while (ch > 11) {
		cout << "Enter other number (from 0 to 11)" << endl;
		cin >> ch;
	}
	if (ch == 0)
		return 0;
	cout << "Please enter n" << endl;
	cin >> n;
	switch (ch) {
	case 1:
		while (i <= n) {
			sum += 1.0 / i; i++;
		}
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 2:
		while (i < n) {
			exp *= 2; i1++;
		}
		cout << "2 ^ " << n << " = " << exp << endl;
		break;
	case 3:
		while (i <= n) {
			pr *= 1 + 1.0 / i / i; i++;
		}
		cout << "Sum of " << n << " elements = " << pr << endl;
		break;
	case 4:
		for (int i = 1; i <= n; ++i)
			sum += pow(-1, i + 1) / (i*(i + 1));
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 5:
		for (int i = 1; i <= n; ++i)
			sum += 1.0 / (pow(i, 5));
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 6:
		for (int i = 1; i <= n; ++i)
			sum += 1 / (pow(2 * i + 1, 2));
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 7:
		for (int i = 1; i <= n; ++i)
			sum += (pow(-1, i)) / (2 * i + 1);
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 8:
		for (int i = 1; i <= n; ++i)
		{
			numerator *= 1 * i;
			denominator += 1.0 / i;
			sum += numerator / denominator;
		}
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 9:
		for (int i = 1; i <= n; ++i)
			sum += sqrt(2 + sum);
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 10:
		for (int i = 1; i <= n; ++i)
			sum += 1.0 / (sin(i - 1) + sin(i));
		cout << "Sum of " << n << " elements = " << sum << endl;
		break;
	case 11:
		while (i <= n) {
			fct *= 1 * i; i++;
		}
		cout << "Factarial (" << n << ") = " << fct << endl;
		break;
		return 0;
	}
}


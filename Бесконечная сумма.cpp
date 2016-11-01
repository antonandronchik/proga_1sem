#include<iostream>

using namespace std;

double Sum(double, double, int);

long long Factorial(int);

void DisplayTable(double left, double right, double step, double eps, int);

bool isTrue(double, double, double, double, double);

int main() {
	short ok = true;
	while (true) {
		int k = 0;
		double x, a, b, h, eps;
		while (true) {
			cout << "Please, enter x (x != 0)\n";
			cin >> x;
			cout << "Please, enter the beginning and the end of interval\n";
			cin >> a >> b;
			cout << "Please, enter step\n";
			cin >> h;
			cout << "Please, enter accuracy (0 < eps < 1)\n";
			cin >> eps;
			if ((isTrue(x, a, b, h, eps))) 
				break;
			else
				system("cls");
				cout<<"The entered data does not match the condition of the task, please try again\n";
		}
		DisplayTable(a, b, h, eps, k);
		cout << "If you want to continue press 1, exit press 0\n";
		cin >> ok;
		if (ok == 0)
			return 1;
		if (ok == 1)
			system("cls");
		else return 0;
	}
}

double Sum(double x, double eps, int k) {
	double sum = 0;
	double denominator = 1, numerator = 1;
	while (fabs(numerator / denominator) > eps) {
		numerator = pow(-1.0, k)*pow(x, (2 * k + 1));
		denominator = Factorial(k)*((2 * k + 1));
		sum += numerator/ denominator;
		k++;
	}
	return sum;
}

void DisplayTable(double left, double right, double step, double eps, int k) {
	for (double x = left; x <= right; x += step) {
		cout << x << "  " << Sum(x, eps, k) << "  "<< endl;
	}
}

long long Factorial(int k) {
	int i = 1;
	long long fct = 1;
	while (i <= k) {
		fct *= 1 * i;
		i++;
	}
	return fct;
}

bool isTrue(double x, double a, double b, double h, double eps) {
	if (x == 0)
		return false;
	if (a >= b)
		return false;
	if (h < 0)
		return false;
	if ((eps <= 0) || (eps >= 1))
		return false;
	return true;
}











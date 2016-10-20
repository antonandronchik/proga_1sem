#include <iostream>

using namespace std;

bool isSimpleNumber(long long);

void PrintSimpleNumber(long long);

int main() {
	short ok = true;
	while (ok) {
		long long n = 2, a;
		cout << "Please, enter diapazon\n";
		cin >> a;
		while (a < 2) {
			cout << "Please enter other diapazon\n";
			cin >> a;
		}
		PrintSimpleNumber(a);
		cout << "If you want to continue press 1, exit press 0\n";
		cin >> ok;
		if (ok == 0)
			return 0;
		if (ok == 1)
			system("cls");
		else return 0;
	}
}

bool isSimpleNumber(long long n) {
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (!(n % i))
			return false;
	return true;
}

void PrintSimpleNumber(long long a) {
	int n = 2;
	while (n <= a) {
		if (isSimpleNumber(n))
			cout << n << "  ";
		n++;
	}
	cout << endl;
}

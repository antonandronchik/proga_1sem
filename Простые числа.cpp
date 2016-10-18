#include <iostream>

using namespace std;

bool isSimpleNumber(int);

int main() {
	int n = 2, a;
	cout << "Please, enter diapazon" << endl;
	cin >> a;
	while (a < 1) {
		cout << "Please enter a positive number" << endl;
		cin >> a;
	}
	while (n <= a) {
		if (isSimpleNumber(n))
				cout << n << "  ";
		n++;
	} 
	cout << endl;
	return 0;
}

bool isSimpleNumber(int n) {
	int i, res;
	for (i = 2; i <= sqrt(n); i++)
		if (!(n % i))
			return false;
	return true;
}

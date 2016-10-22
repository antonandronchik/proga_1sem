#include <iostream>

using namespace std;

bool isPalindrome(long long);

void PrintPalindrome(long long, long long);

int main() {
	long long n = 10, a;
	cout << "Please, enter range, more than 10" << endl;
	cin >> a;
	while (a < 10) {
		cout << "Please, enter range, more than 10" << endl;
		cin >> a;
	}
	PrintPalindrome(a, n);
	return 0;
}

bool isPalindrome(long long n) {
	long long cop, rev = 0;
	cop = abs(n);
	rev = 0;
	while (cop) {
		short a = cop % 10;
		rev = rev * 10 + a;
		cop /= 10;
	}
	if (rev == abs(n))
		return true;
	return false;
}

void PrintPalindrome(long long a, long long n) {
	while (n <= a) {
		if (isPalindrome(n))
			cout << n << "  ";
		n++;
	}
	cout << endl;
}

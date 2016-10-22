#include <iostream>

using namespace std;

int MinDigit(long long);

int MaxDigit(long long);

int main() {
	int i;
	long long n, a, c;
	cout << "Please enter number" << endl;
	cin >> n;
	a = n;
	c = n;
	if (n == 0) {
		cout << "Input Error!" << endl;
		return 0;
	}
		for (i = 0; i <= 9; i++) {
			int z = 0;
			int buff = c;
			while (buff) {
				int ost = buff % 10;
				if (ost == i)
				z++;
				buff /= 10;
			}
			cout << " There " << z << " times of the number " << i << endl;
		}
	cout << "The min digit of the input number is " << MinDigit(fabs(n)) << endl;
	cout << "The max digit of the input number is " << MaxDigit(fabs(n)) << endl;
	return 0;
}

int MinDigit(long long n) {
		int cur;
		int min_n = 9;
		while (n) {
			cur = n % 10;
			min_n = fmin(min_n, cur);
			n /= 10;
		}
		return min_n;
	} 

int MaxDigit(long long n) {
		int cur;
		int max_n = 0;
		while (n) {
			cur = n % 10;
			max_n = fmax(max_n, cur);
			n /= 10;
		}
		return max_n;
	}



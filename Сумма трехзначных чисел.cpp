#include <iostream>

using namespace std;

int sumThreedigit(int);

int evenDigit(int);

bool isOddNumber(int);

int main() {
	int num = 100;
	cout << "The sum of the all numbers is " << sumThreedigit(num) << endl;
	cout << "The even digits in the sum is " << evenDigit(sumThreedigit(num)) << endl;
	return 0;
}

int sumThreedigit(int num) {
	int sum = 0;
	while (num < 1000) {
		if (isOddNumber(num))
			sum += num;
		num++;
	}
	return sum;
}

bool isOddNumber(int num) {
	int j, a, copy;
	while (num < 1000) {
		j = 0;
		copy = num;
		while (j < 3) {
			a = copy % 10;
			if (a % 2 == 0)
				break;
			copy /= 10;
			j++;
		}
		if (j == 3)
			return true;
		else
			return false;
	}
}

int evenDigit(int sum) {
	int copys = sum;
	int k = 0;
	while (copys) {
		int n;
		n = copys % 10;
		if (n % 2 == 0)
			k++;
		copys /= 10;
	}
	return k;
}

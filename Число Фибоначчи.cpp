#include <iostream>

using namespace std;

int fibonachy(int);

int main() {
	int num, i = 0;
	do {
		num = fibonachy(i);
		i++;
	} while (num < 99);
	cout << "Min three-digit number of the Fibonachi sequence is " << num << endl;
	return 0;
}

int fibonachy(int a = 20) {
	int i;
	long s = 0, b = 1, c = 1;
	for (i = 1; i <= (a - 2); i++) {
		s = b + c;
		b = c;
		c = s;
	}
	return s;
}

#include <iostream>
using namespace std;
long fibonachy(int);
int main() {
	int m, i = 1;
	do {
		m = fibonachy(i); i++;
	} while (m < 99);
	cout << "Min three-digit number of the Fibonachi sequence is " << m << endl;
	return 0;
}

long fibonachy(int a = 20)
{
	int i;
	long s = 0, b = 1, c = 1;
	for (i = 1; i <= (a - 2); i++) {
		s = b + c;
		b = c;
		c = s;
	}
	return s;
}
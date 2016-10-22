#include <iostream>

using namespace std;

bool sumCubeNumbers(int);

void PrintNumbers(int);

int main() {
	int num = 100;
	cout << "All three-digit numbers that are equal to the sum of the cubes of its digits\n";
	PrintNumbers(num);
	return 0;
}

bool sumCubeNumbers(int num) {
	int copy, a, b, c;
	while (num < 1000) {
		copy = num;
		a = copy % 10;
		b = (copy / 10) % 10;
		c = (copy / 100) % 10;
		if (pow(a, 3.0) + pow(b, 3.0) + pow(c, 3.0) == num)
			return true;
		else return false;
	}
}

void PrintNumbers(int num) {
	while (num < 1000) {
		if(sumCubeNumbers(num))
		cout << num << "  ";
		num++;
	}
cout << endl;
}

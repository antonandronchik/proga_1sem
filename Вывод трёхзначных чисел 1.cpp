#include <iostream>

using namespace std;

bool isThreedigit(int);

void PrintNumbers(int);

int main() {
	int num = 10;
	PrintNumbers(num);
	return 0;
}

bool isThreedigit(int i) {
	int j = 0;
	int a, cop;
	cop = i;
	while (j < 3)
	{
		a = cop % 10;
		if (a == 0)
			break;
		if (i % a == 0)
			cop /= 10;
		else break;
		j++;
	}
	if (j == 3)
		return true;
	return false;
}

void PrintNumbers(int num) {
	while (num < 1000) {
		if (isThreedigit(num))
			cout << num << "  ";
		num++;
	}
	cout << endl;
}

#include <iostream>

using namespace std;

int main() {
	short ok = true;
	while (true) {
		cout << "Please, enter a number\n";
		long long num, cop;
		cin >> num;
		cout << "Please, enter a digit you want to delete\n";
		int del, dgt = 0;
		cin >> del;
		while ((del >= 10) || (del < 0)) {
			cout << "Please, enter a DIGIT FROM 0 TO 9 you want to delete\n";
			cin >> del;
		}
		cop = abs(num);
		while (cop) {
			if (cop % 10 != del)
				dgt = dgt * 10 + cop % 10;
			cop /= 10;
		}
		while (dgt) {
			cop = cop * 10 + dgt % 10;
			dgt /= 10;
		}
		if (num < 0)	
		cout << "The final number without digit " << del << " is\n" << '-' << cop << "\n";
		else
		cout << "The final number without digit " << del << " is\n" << cop << "\n";
		cout << "If you want to continue press 1, exit press 0\n";
		cin >> ok;
		if (ok == 0)
			return 1;
			if (ok == 1)	
		system("cls");
			else return 0;
	}
}
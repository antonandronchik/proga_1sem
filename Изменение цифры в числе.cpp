#include <iostream>

using namespace std;

int main() {
	short ok = true;
	int p, del, i = 0;
	long long num, cop, dgt = 0;

	while (true) {
		cout << "Please, enter a number\n";
		cin >> num;
		cout << "Please, enter a digit you want to change\n";
		cin >> del;
		while ((del >= 10) || (del < 0)) {
			cout << "Please, enter a DIGIT FROM 0 TO 9 you want to change\n";
			cin >> del;
		}
		cout << "Please, enter a digit for which you want to change " << del << endl;
		int change;
		cin >> change;
		while ((change >= 10) || (change < 0)) {
			cout << "Please, enter a DIGIT FROM 0 TO 9 for wich you want to change\n";
			cin >> change;
		}
		cop = abs(num);
		while (cop != 0) {
			p = cop % 10;
			if (p == del)
				dgt += change * pow(10.0, i);
			else
				dgt += p * pow(10.0, i);
			cop /= 10;
			i++;
		}
		if (num < 0)
		cout << "The final number with digit " << change << " is\n" << '-' << dgt << "\n";
		else
		cout << "The final number with digit " << change << " is\n" << dgt << "\n";
		cout << "If you want to continue press 1, exit press 0\n";
		cin >> ok;
		if (ok == 0)
			return 1;
		if (ok == 1)
			system("cls");
		else return 0;
	}
}
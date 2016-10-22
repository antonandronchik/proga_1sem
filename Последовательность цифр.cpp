#include <iostream>

using namespace std;

int main() {
	short ok = true;
	while (ok){
	cout << "Please, Enter number" << endl;;
	long long n;
	cin >> n;
	int next, pref = n % 10;
		n = n / 10;
		bool eq = false, less = false, grt = false;
	while (n) {
		next = n % 10;
		if (next < pref)
			grt = true;
		else if (next > pref)
			less = true;
		else eq = true;

		pref = next;
		n /= 10;
	}
	if (eq && !less && !grt) 
		cout << "Monotone" << endl;
	else if (eq && less && grt)
		cout << "Neither" << endl;
	else if (less && eq && !grt)
		cout << "Not strictly decreasing" << endl;
	else if (!eq && less && !grt)
		cout << "Decreasing" << endl;
	else if (grt && eq && !less)
		cout << "Not strictly increasing" << endl;
	else if (!eq && !less && grt)
		cout << "Increasing" << endl;	
	cout << "If you want to continue press 1, exit press 0\n";
	cin >> ok;
	if (ok == 0)
		return 1;
	if (ok == 1)
		system("cls");
	else return 0;
	}
}
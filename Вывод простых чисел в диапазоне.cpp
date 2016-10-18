#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Please, enter number" << endl;
	cin >> n;
	int i, res;
	while (n < 1) {
		cout << "Please enter a positive number" << endl;
		cin >> n;
	}
	if (n == 1) {
		cout << "The number 1 is neither simple or compound" << endl;
		return 1;
	}
	for (i = 2, res = 0; i < n; i++)
		if (!(n % i))
			res = 1;
	if (!res)
		cout << "The number "<< n << " is simple" << endl;
	else 
		cout << "The number " << n << " is not simple" << endl;
	return 0;
}

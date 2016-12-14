#include "Header.h"

int main() {
	int a[N] = { 0 }, b[N] = { 0 }, j = 0, m = 0;
	int n, number, k;
	/*cout << "Please, enter k\n";
	cin >> k;*/
	/*cout << "Please, enter number\n";
	cin >> number;*/
	while (true)
	{
		cout << "Enter n > 0 and n <= " << N << ": ";
		cin >> n;
		if (n > 0 && n <= N)
			break;
	}
	EnterArray(a, n);
	//RandomArray(a, n);
	cout << "Source array" << endl;
	DisplayArray(a, n);
	// 3 TASK 
	Sequence(a, n);
	//4 TASK
	//Reverse(a, n);
	//DisplayArray(a, n);
	//5 TASK
	/*cout << "\nAll local maximus\n";;
	locmaxNumbers(a, b, n, j);
	DisplayArray(b, j);
	cout << "\nAll local minimums\n";;
	locminNumbers(a, b, n, j);
	DisplayArray(b, j);*/
	//6 TASK
	/*cout << "All numbers less than " << number << endl;
	LessNumbers(a, n, b, j, number);
	DisplayArray(b, j);*/
	//7 TASK
	/*CiklReverse(a, n, k);
	DisplayArray(a, n);*/
	//8 TASK
	//SumElements(a, n);
	//TASK 14
	/*DelEl2(a, b, n, m);
	cout << "\nAll elements occurring more than once\n";
	DisplayArray(b, m);*/
	//TASK 15
	/*AmountOFNumbers(a, b, n, m);
	cout << "\nThe amount various elements are\n";
	cout << m << endl;*/
	return 0;
} 

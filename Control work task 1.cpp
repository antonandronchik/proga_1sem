#include <iostream>

using namespace std;

const int  N = 256;
void DisplayArray(char a[],int n);
void Switcher(int a[], char arr[], int n);

int main()
{
	int n = 10, number;
	int a[N] = { 15, 22, 26, 9, 13, 29, 24, 28, 28, 27 };
	char str[N] = {};
	Switcher(a, str, n);
	DisplayArray(str, n);
}

void DisplayArray(char a[],int n)
{
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
		}
	cout << endl;

}

void Switcher(int a[], char arr[], int n)
{
	char str[30] = {"zyxwvutsrqponmlkjihgfedcba!+"};
	for (int i = 0; i < N; i++)
	{
		if ((a[i] - 1) > 30)
		{
			cout << "Error";
			break;
		}
		arr[i] = str[a[i] - 1];
	}
}
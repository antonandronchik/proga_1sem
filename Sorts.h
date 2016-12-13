#include <iostream>

using namespace std;

const int N = 100;

void RandomArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 100 - 50;
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void ChoiceSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int max = i;
		for (int j = i + 1; j < n; ++j)
			if (a[j] > a[max]) max = j;
		Swap(a[i], a[max]);
	}
}

void BubbleSort(int a[], int n) {
	int i = 0;
	bool flag = true;
	while (flag) {
		flag = false;
		for (int j = n - 1; j > i; j--) {
			if (a[j] > a[j - 1]) {
				Swap(a[j], a[j - 1]);
				flag = true;
			}
		}
		i++;
	}
}   

/*void InsertionSort(int a[], int n) {
	int temp = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		temp = a[i];
		j = i - 1;
		for (int j = 1; temp < a[j]; j++)
			for (int k = i - 1; j >= 0; k++){
				a[k + 1] = a[k];
				j = j - 1;
				a[j] = temp;
		}
	}
}*/

void InsertionSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				for (int k = i - 1; k >= j; k--)
				{
					a[k + 1] = a[k];
				}
				a[j] = temp;
			}
		}
	}
}
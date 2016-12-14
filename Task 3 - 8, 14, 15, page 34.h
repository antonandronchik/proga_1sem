#include <iostream>

using namespace std;

const int N = 100;

void EnterArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << (i + 1) << "] = ";
		cin >> a[i];
	}
}

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

void Reverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		Swap(a[i], a[n - i - 1]);
}

void locmaxNumbers(int a[], int b[], int n, int& j) {
	j = 0;
	if (a[0] > a[1])
	{
		b[j] = a[0];
		j++;
	}
	if (a[n - 1] > a[n - 2])
	{
		b[j] = a[n - 1];
		j++;
	}
	for(int i = 1; i < n - 1; i++)
		if ((a[i] > a[i + 1]) && (a[i] > a[i - 1]))
		{
			b[j] = a[i];
			j++;
		}
}


void locminNumbers(int a[], int b[], int n, int& j) {
	j = 0;
	if (a[0] < a[1])
	{
		b[j] = a[0];
		j++;
	}
	if (a[n - 1] < a[n - 2])
	{
		b[j] = a[n - 1];
		j++;
	}
	for(int i = 1; i < n - 1; i++)
		if ((a[i] < a[i + 1]) && (a[i] < a[i - 1]))
		{
			b[j] = a[i];
			j++;
		}
}

bool IsnotDecreasing(int a[],int n) {
	int i = 1, first = 0;
	bool eq = false, less = false, grt = false;
	while (i < n) {
		if (a[first] > a[i])
			less = true;
		else if (a[first] < a[i])
			grt = true;
		else if (a[first] = a[i])
			eq = true;
			first++;
			i++;
	}
	if ((eq && less && !grt) || (!eq && less && !grt))
		return false;
}

void LessNumbers(int a[], int n, int b[], int& j, int number2)
{
	j = 0;
	if (!(IsnotDecreasing(a, n)))
		cout << "Sorry, massive is decreasing\n";
	else 
	{
		for (int i = 0, prev = 0; i < n; i++, prev++)
			if (a[prev] < number2)
			{
				b[j] = a[prev];
				j++;
			}
	}
}

void Sequence(int a[], int n) {
	int i = 1, first = 0;
	bool eq = false, less = false, grt = false;
	while (i < n) {
		if (a[first] > a[i]) 
			less = true;
		else if (a[first] < a[i])
			grt = true;
		else if (a[first] = a[i])
			eq = true;
			first++;
			i++;
	}
	if (!eq && less && !grt)
		cout << "The sequence is strictly decreasing\n";
	else if (!eq && !less && grt)
		cout << "The sequence is strictly increasing\n";
	else if ((eq && less && !grt) || (eq && less && grt) || (eq && !less && !grt))
		cout << "The sequence is not increasing\n";
	else if ((eq && !less && grt) || (eq && less && grt) || (eq && !less && !grt))
		cout << "The sequence is not decreasing\n";
} 

void SumElements(int a[],int& n) {
	while (n >= 2) {
		for (int i = 0; i < n - 1; i++)
			a[i] = a[i] + a[i + 1];
		n--;
		DisplayArray(a, n);
	}
}

void CiklReverse(int a[], int n, int k) {
	int j = 0;
	while (j < k) {
		for (int i = 0; i < n - 1; i++)
			Swap(a[i], a[i + 1]);
		j++;
	}
}

bool ExistValue2(int a[], int n, int value) {
	for (int i = 0; i < n; i++)
		if (a[i] == value)
			return false;
	return true;
}

void DelEl2(int a[], int b[], int n, int& m) {
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] == a[j] && ExistValue2(b, m, a[i])) {
				b[m] = a[i];
				m++;
			}
}

void AmountOFNumbers(int a[], int b[], int n, int& m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; )
		{
			if ((a[i] != a[j]) && ExistValue2(a, i, a[i]))
				j++;
			else break;
			if (j == n)
			{
			b[m] = a[i];
			m++;
			}
		}
	}
}

#include <iostream>

using namespace std;

const int N = 100;
void DisplayArray(char a[], int n);
void EnterArray(char a[], int n);
void Swap(char& a, char& b);
void Reverse(char a[], int n);
bool isPolindrome(char str[], char arr[], int n);
void StrCopy(char a[], char b[], int n);


int main() 
{
	int n;
	char str[N] = { '0' };
	char arr[N] = { '0' };
	while (true) {
		cout << "Enter n > 0 and n <= " << N << ": ";
		cin >> n;
		if (n > 0 && n <= N)
			break;
	}
	cout << "Please, enter word\n";
	EnterArray(arr, n);
	if (isPolindrome(arr, str, n))
		cout <<"This word is polindrome\n";
	else cout <<"This word is not polindrome\n";
	return 0;
}

void StrCopy(char a[], char b[], int n)
{
	for (int j = 0; j < n; j++)
		b[j] = a[j];
}

void DisplayArray(char a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}

void EnterArray(char a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Swap(char& a, char& b)
{
	int t = a;
	a = b;
	b = t;
}

void Reverse(char a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		Swap(a[i], a[n - i - 1]);
}

bool isPolindrome(char str[], char arr[], int n) {
	int i = 0;
	StrCopy(str, arr, n);
	Reverse(arr, n);
	while (i < n)
	{
		if (str[i] == arr[i])
			i++;
		else break;
	}
	if (i == n)
		return true;
	else return false;
}

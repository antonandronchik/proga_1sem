#include <iostream>

using namespace std;

int const N = 256, M = 256;

void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void CiklReverse(int a[], int n, int k) {
	int j = 0;
	while (j < k) {
		for (int i = 0; i < n - 1; i++)
			Swap(a[i], a[i + 1]);
		j++;
	}
}

void EnterMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "[" << (i + 1) << "][" << (j + 1) << "] = ";
			cin >> matrix[i][j];
		}
	}
}

void RandomMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100 - 10;
		}
	}
}

void FillMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			matrix[i][j] = i + 1;
}

void SquareRev(int matrix[][M], int n)
{
	for(int i = 1; i <= n; i++)
		CiklReverse(matrix[n - i], n, n/2);
	for(int i = 0; i < n / 2; i++)
		for(int j = 0; j < n / 2; j++)
		Swap(matrix[i][j], matrix[i + n / 2][j + n / 2]);
}

void DisplayMatrix(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(5);
			cout << matrix[i][j];
		}
		cout <<endl;
	}
}

void RevÑolumns(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
		for(int j = 0; j < m / 2; j++)
			Swap(matrix[i][j], matrix[i][m - j - 1]);
}

void RevStrings(int matrix[][M], int n, int m)
{
	for (int i = 0; i < n / 2; i++)
		for(int j = 0; j < m; j++)
			Swap(matrix[i][j], matrix[n - i -1][j]);
}

void CentralSymmetricRev(int matrix[][M], int n)
{
	for(int i = 0; i < n / 2; i++)
		for(int j = 0; j < n / 2; j++)
		{
		Swap(matrix[i][j], matrix[i + n / 2][j + n / 2]);
		Swap(matrix[i][j + n / 2],matrix[i + n / 2][j]);
		}
}
#include <iostream>

using namespace std;

const int M = 256;

void FillMatrix1(int matrix[][M], int n);
void FillMatrix2(int matrix[][M], int n);
void FillMatrix3(int matrix[][M], int n);
void FillMatrix4(int matrix[][M], int n);
void DisplayMatrix(int matrix[][M], int n, int m);

int main()
{
	int n;
	cout << "Please, enter size of quadratic matrix\n";
	cin >> n;
	int matrix[M][M] = { 0 };
	FillMatrix1(matrix, n);
	//FillMatrix2(matrix, n);
	//FillMatrix3(matrix, n);
	//FillMatrix4(matrix, n);
	DisplayMatrix(matrix, n, n);
	return 0;
}

void FillMatrix1(int matrix[][M], int n)
{ 
	for (int i = 0; i < n; i++) 
	{ 
		for (int k = i; k < n; k++) 
			matrix[k][i] = n - k+i; 
	} 


} 

void FillMatrix2(int matrix[][M], int n)
{ 
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = i; j < n - i ; j++) 
		{ 
			matrix[i][j] = 1; 
			matrix[n - 1 - i][j] = 1; 
		} 
	} 
}

void FillMatrix3(int matrix[][M], int n)
{ 
	for (int i = 0; i < n; i++) 
	{ 
		for (int j = i; j < n - i ; j++) 
		{ 
			matrix[j][i] = 1; 
			matrix[j][n - i - 1] = 1; 
		} 
	}
}

void FillMatrix4(int matrix[][M], int n)
{ 
	for (int i = 0; i < n; i++) 
	{
			matrix[i][i] = i + 1; 
			matrix[i][n - i - 1] = n - i; 
	}
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
		cout << endl;
	}
}

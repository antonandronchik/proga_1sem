#include <iostream>

using namespace std;

const int N = 256;
void DisplayArray(char a[], int n);
int StrLength(char str[]);
bool IsAlphabet(char ch);
bool Difference (char str2[], char str3[]);
void Swap(char& a, char& b);
void ChangeWord (char str1[], char str2[], char str3[], int n, int& t);
void CiklReverse(char a[],char str2[], char str3[], int n, int k, int t);

int main()
{
	int n = 26, t = 0, k = 0;
	char str1[N] = {"Is TV very popular today?"};
	char str2[N] = {"TV"};
	char str3[N] = {"television"};
	cout << str1 << endl;
	ChangeWord(str1, str2, str3, n, t);
	CiklReverse(str1,str2,str3,n, k, t);
	DisplayArray(str1, 100);
	return 0;
}

void DisplayArray(char a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
	cout << endl;

}

bool IsAlphabet(char ch)
{ 
	if (ch >= 'A'&& ch <= 'Z' || ch >= 'a'&& ch <= 'z') 
		return true; 
	else return false; 
} 

void Swap(char& a, char& b)
{
	int t = a;
	a = b;
	b = t;
}

int StrLength(char str[])
{ 
	int length = 0; 
	while (str[length])
	{
		length++; 
	}
	return length; 
} 

bool Difference (char str2[], char str3[])
{
	if (StrLength(str2) - StrLength(str3) >= 0)
		return true;
	else return false;
}

void ChangeWord (char str1[], char str2[], char str3[], int n, int& t)
{
	bool flag = false; int i = -1, j = 0; 
	while (str1[++i]) 
	{  
		if (str1[i] == str2[j])
		{ 
			flag = true; 
			j++; 
			continue; 
		}

		if (j == StrLength(str2))
		{
			if (Difference(str2, str3))
			{
				t = i - StrLength(str2) + 2;
				for (int k = 0,j = i - StrLength(str2); str2[k]; k++)
					str1[j++] = str3[k];
			}
			else
			{
				for (int k = 0,j = i - StrLength(str2); str3[k]; k++)
				{
					if (!(IsAlphabet(str2[k])))
					{

						str1[n] = str3[k];
						n++;
						continue;
					}
					str1[j++] = str3[k];
					t = j;
				}
			}
		}

		if (flag) 
		{ 
			flag = false; 
			j = 0; 
		} 
	} 
}

void CiklReverse(char a[], char str2[], char str3[], int n, int k, int t) {
	int j = 0;
	if (Difference (str2, str3))
	{
		k = StrLength(str2) - StrLength(str3);
		n = n - 1;
	}
	else
	{
		k = n - t;
		n = n - 1 + StrLength(str3) - StrLength(str2);
	}
	while (j < k) {
		for (int i = t; i < n; i++)
			Swap(a[i], a[i + 1]);
		j++;
	}
}
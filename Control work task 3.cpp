#include <iostream>

using namespace std;

const int N = 256;
int StrLength(char []);
bool IsAlphabet(char );
int Difference(char [], char []);
void DecreaseString(char [], char [], char [], int, int);
void IncreaseString(char [], char [], char [], int, int);
bool IsEqual(char [], char [], int, int);
void ObtainTextOfWords(char [], char [], char [], int);
void ChangeWord(char [], char [], char [], int, int, int);
void Choiсe(char [], char [], char [], int, int&, int);

int main()
{
	char str1[N] = {"Is TV very popular today?"};
	int n = StrLength(str1);
	char str2[N] = {'0'};
	char str3[N] = {'0'};
	cout << str1 << endl;
	cout << "Please, enter word that you want to change\n";
	cin >> str2;
	cout << "Please, enter word for which you want to change the word " << str2 << endl;
	cin >> str3;
	ObtainTextOfWords(str1, str2, str3, n);
	cout << str1 << endl;
	return 0;
}

void ObtainTextOfWords(char str1[], char str2[], char str3[], int n)
{
	bool flag = false; int i = -1, j = 0;
	while (str1[++i]) 
	{  
		if (IsAlphabet(str1[i])) 
		{ 
			flag = true; 
			j++; 
			continue; 
		} 
		Choiсe(str1, str2, str3, n, i, j);
		if (flag) 
		{ 
			flag = false; 
			j = 0; 
		} 
	} 
}

bool IsAlphabet(char ch)
{ 
	if (ch >= 'A'&& ch <= 'Z' || ch >= 'a'&& ch <= 'z') 
		return true; 
	else return false; 
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

int Difference(char str2[], char str3[])
{
	return StrLength(str2) - StrLength(str3);
}

void Choiсe(char str1[], char str2[], char str3[], int n, int& i, int j)
{
	if (IsEqual(str1, str2, i, j))
	{
		ChangeWord(str1, str2, str3, n, i, j);
		if (Difference(str2,str3) >= 0)
			i = i - Difference(str2, str3);
		else i = i + abs(Difference(str2, str3));
	}
}

bool IsEqual(char str1[], char str2[], int i, int j)
{
	int len = 0;
	i -= j;
	for (int k = 0; str2[k]; i++, k++)
	{
		if (str1[i] == str2[k])
			len++;
		else break;
	}
	if (len == j)
		return true;
	return false;
}

void ChangeWord(char str1[], char str2[], char str3[], int n, int i, int j)
{
	if (Difference(str2,str3) >= 0)
		DecreaseString(str1, str2, str3, n, i);
	else 
		IncreaseString(str1, str2, str3, n, i);
	for (int k = 0; str3[k]; k++, i++)
		str1[i - j] = str3[k];

}

void DecreaseString(char str1[], char str2[], char str3[], int n, int i)
{
	int copy = i;
	for (int j = 0; j < n - copy + Difference(str2, str3); j++)
	{
		str1[i - Difference(str2, str3)] = str1[i];
		i++;
	}
}

void IncreaseString(char str1[], char str2[], char str3[], int n, int i)
{
	int copy = StrLength(str1) - 1;
	for (int j = 0; j < StrLength(str1) - i; j++)
	{
		str1[copy + abs(Difference(str2, str3))] = str1[copy];
		copy--;
	}
}

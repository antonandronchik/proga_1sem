#include <iostream>

using namespace std;

const int N = 256;
bool IsAlphabet(char ch);
void ObtainArrayOfWords(char s[], char arr[][N], int& k);
void DisplayMinMaxWords(char arr[][N], int min, int max, int& k);
int StrLength(char str[]);
int Min(char arr[][N], int);
int Max(char arr[][N], int);

int main()
{
	int k = 0;
	char s[N] = { "TV is a popular entertainment in Great Britain Almost every citizen of the country watches TV at least 4 hours in day" };
	char arr[N][N] = { '0' };
	cout << s << endl;
	ObtainArrayOfWords(s, arr, k);
	cout << "\nMin and max words are\n" << endl;
	DisplayMinMaxWords(arr, Min(arr, k), Max(arr, k), k);
	return 0;
}

bool IsAlphabet(char ch)
{ 
	if (ch >= 'A'&& ch <= 'Z' || ch >= 'a'&& ch <= 'z') 
		return true; 
	else return false; 
} 

void ObtainArrayOfWords(char s[], char arr[][N], int& k) 
{ 
	bool flag = false; int i = -1, j = 0; 
	while (s[++i]) 
	{  
		if (IsAlphabet(s[i])) 
		{ 
			flag = true; 
			arr[k][j] = s[i]; 
			j++; 
			continue; 
		} 
		if (flag) 
		{ 
			flag = false; 
			k++;
			j = 0; 
		} 
	} 
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

void DisplayMinMaxWords(char arr[][N], int min, int max, int& k) 
{ 
	for(int i = 0; i < k; i++) 
	{
			if(StrLength(arr[i]) == min) 
				cout << arr[i] << endl;
			if(StrLength(arr[i]) == max) 
				cout << arr[i] << endl;
				
	}
}

int Max(char arr[][N], int n)
{
	int maxs = 0;
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (StrLength(arr[max]) < StrLength(arr[i]))
		{
			max = i;
		}
	}
	return StrLength(arr[max]);
}

int Min(char arr[][N], int n)
{
	int min = 0, mins = 0;
	for (int i = 1; i < n; i++)
	{
		if (StrLength(arr[min]) >= StrLength(arr[i]))
		{
			min = i;
		}
	}
	return StrLength(arr[min]);
}

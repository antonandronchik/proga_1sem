#include <iostream>

using namespace std;

const int N = 256;
bool IsAlphabet(char ch);
bool IsVowel(char ch);
void ObtainArrayOfWords(char s[], char arr[][N], int& k);
void DisplayWords(char arr[][N], int n);
int StrLength(char str[]);

int main()
{
	int k = 0;
	char s[N] = { "TV is a popular entertainment in Great Britain Almost every citizen of the country watches TV at least 4 hours in day" };
	char arr[N][N] = { '0' };
	cout << s << endl;
	ObtainArrayOfWords(s, arr, k);
	cout <<"\nAll words starting and ending in vowels\n";
	DisplayWords(arr, k);
	return 0;
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

bool IsAlphabet(char ch)
{ 
	if (ch >= 'A'&& ch <= 'Z' || ch >= 'a'&& ch <= 'z') 
		return true; 
	else return false; 
} 

bool IsVowel(char ch)
{ 
	if (ch == 'A' || ch == 'E'|| ch == 'Y'|| ch == 'U'|| ch == 'I'|| ch == 'O'|| ch == 'a'|| ch == 'e'|| ch == 'y'|| ch == 'u'|| ch == 'i'|| ch == 'o') 
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

void DisplayWords(char arr[][N], int n)
{ 
		for (int j = 0, i = 0; j <= n; j++)
		{

			if (IsVowel(arr[j][i]) && IsVowel(arr[j][StrLength(arr[j]) - 1]))
			cout << arr[j] << endl; 
		}
}
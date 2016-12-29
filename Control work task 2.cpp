#include <iostream>

using namespace std;

int SearchNumber(int);
void digits(int&, int&);
int NewNumber(int, int);

int main()
{
	int number;
	cout << "Please, enter number\n";
	cin >> number;
	cout <<"Near minimal number, consisting of the same digits is "<< SearchNumber(number) << endl;
	return 0;
}

int SearchNumber(int number)
{  
	bool flag = false; 
	int copy = number; 
	while (copy % 10)
	{ 
		if (copy % 10 < (copy % 100) / 10) 
			flag = true; 
		copy /= 10; 
	} 
	if (flag == false)
		return -1;
	else 
	{ 
		NewNumber(number, copy);
	} 
}

int NewNumber(int number, int copy)
{	
	copy = number; 
	int len = 0; 
	while (copy % 10)
	{ 
		len++; 
		if (copy % 10 < (copy % 100) / 10)
		{ 
			int temp = 1;
			copy = number;
			for (int i = 0; i < len - 1; i++) 
				temp *= 10;
			digits(temp, copy);
			return copy;
		} 
		copy /= 10; 
	} 
}

void digits(int& temp, int& copy)
{ 
	int a = copy / (temp * 100), b = copy % temp, c = (copy / (temp * 10)) % 10, d = (copy / temp) % 10; 
	copy = a * temp * 100 + b + d * temp * 10 + c * temp; 

}

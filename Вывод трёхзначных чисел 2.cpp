#include <iostream>

#include <cmath>

using namespace std;

int main() {
	int i = 100;
	int copy, a, b, c;
	cout <<"All three-digit numbers that are equal to the sum of the cubes of its digits\n";
	while(i < 1000) 
	{
		copy = i;
		a = copy % 10;  // a - последняя цифра в числе
		b = (copy/10) % 10;  // b - вторая цифра в числе
		c = (copy/100) % 10;  // c - перввая цифра в числе
			if (pow(a, 3.0) + pow(b, 3.0) + pow(c, 3.0) == i) 
				cout<< i << "  ";
		i++;
	}
	cout<<endl;
	return 0;
}
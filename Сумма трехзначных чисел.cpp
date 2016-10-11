#include <iostream>

using namespace std;

int main() {
	int j,i = 100;
	int a, copy;
	int sum = 0, k = 0;
	while(i < 1000) 
	{
		j = 0;
		copy = i;
		while(j < 3) 
		{
			a = copy % 10;
			if (a % 2 == 0) 
				break;
			copy /= 10;
			j++;
		}
		if (j == 3)
			sum += i;
		i++;
	}
	int copys = sum;
		while(copys) {
			int n;
			n = copys % 10;
			if (n % 2 == 0)
				k++;
				copys /= 10;
		}
	cout<<"The sum of the all numbers is "<< sum << endl;
	cout <<"The even digits in the sum is "<< k << endl;
	return 0;
}
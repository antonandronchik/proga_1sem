#include <iostream>

using namespace std;

int sumThreedigit(int, int &);

int main() {
	int i = 100, k = 0;
	cout<<"The sum of the all numbers is "<< sumThreedigit(i, k) << endl;
	cout <<"The even digits in the sum is "<< k << endl;
	return 0;
}

int sumThreedigit(int i, int &k) {
	int j, a, copy, sum = 0;
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
	return sum;
}

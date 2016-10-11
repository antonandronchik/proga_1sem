#include <iostream>

using namespace std;

int main() {
	cout<<"All three-digit numbers that are divisible by each digit in them\n";
	int j,i = 100;
	int dgt, copy;
	while(i < 1000) {
		j = 0;
		copy = i;
		while(j < 3) {
			dgt = copy % 10;
			if (dgt == 0)
				break;
			if (i % dgt == 0) 
				copy /= 10;
			else break;
			j++;
		}
		if (j == 3)
			cout<< i << "  ";
		i++;
	}
	cout<<endl;
	return 0;
}
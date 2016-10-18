#include <iostream>

using namespace std;

bool isThreedigit (int);

int main() {
int i = 10;
	while(i < 1000){
		if (isThreedigit (i))
			cout<< i << "  ";
			i++;
	}
	cout<<endl;
	return 0;
}

bool isThreedigit (int i) {
	int j = 0;
	int a, cop;
		cop = i;
		while(j < 3) 
		{
			a = cop % 10;
			if (a == 0)
				break;
			if (i % a == 0) 
				cop /= 10;
			else break;
			j++;
		}
	if (j == 3)
		return true;
	return false;
}

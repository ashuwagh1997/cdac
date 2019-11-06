#include <iostream>

using namespace std;

int getSum();  // function prototype

int main()
{
	int a = 4, b = 5;
	getSum();
	return 0;
}

int getSum(){
	int a,b,sum;
	a = 100; 
	b = 300;
	sum = a + b;
	cout << "print sum:" << sum;
}

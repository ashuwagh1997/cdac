#include <iostream>

using namespace std;

int getSum(int, int);  // function prototype

int main()
{
	int a, b;
	cout << "Enter a and b: \n";
	cin >> a;
	cin >> b;
	getSum(a,b);
	return 0;
}

int getSum(int x, int y){
	int sum;
	sum = x + y;
	cout << "print sum:" << sum;
}

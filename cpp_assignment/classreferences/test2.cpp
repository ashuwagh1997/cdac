//program to use if statement
#include <iostream>

using namespace std;

int main() 
{
	int number;
	cout << "Enter number : ";
	cin >> number;

	if (number > 100) {
		cout << "Number is greater than 100..! \n";
	}
	else {
		cout << "Number is less than 100..! \n";
	}	
	cout << "This statement executes always..! \n";
	return 0;
}


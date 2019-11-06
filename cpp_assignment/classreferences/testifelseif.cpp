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
	else if (number == 100){
		cout << "Number is equal to 100..! \n";
	}
	else if (number != 200){
		cout << "Number is not equal to 200..! \n"	;
	}
	else {
		cout << "Number is less than 100..! \n";
	}	
	cout << "This statement executes always..! \n";
	return 0;
}


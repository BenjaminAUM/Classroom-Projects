// class assignment
#include <iostream>
using namespace std;

int main()
{
	int number, number_reversed = 0, last_digit;

	cout << "Enter any number(s): ";
	cin >> number;

	while (number != 0)
	{
		last_digit = number % 10;
		number_reversed = number_reversed * 10 + last_digit;
		number = number / 10;
	}
	cout << number_reversed << " " << endl;
	return 0;
}
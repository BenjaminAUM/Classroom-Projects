// 11-3-2025 in class assignment, Online Shopping Discount Calculator
#include <iostream>
using namespace std;

float apply_discount(float price);

int main()
{
	float user_input;

	cout << "Enter a price: ";
	cin >> user_input;

	float result = apply_discount(user_input);

	cout << "Final price: " << result << endl;
	return 0;
}

float apply_discount(float price)
{
	float result;

	if (price < 100)
	{
		result = price;
	}
	else if (price >= 101 || price <= 500)
	{
		result = price - (price * .10);
	}
	else if (price >= 501 || price <= 1000)
	{
		result = price - (price * .20);
	}
	else if (price > 1000)
	{
		result = price - (price * .30);
	}
	else
	{
		//do nothing
	}
	return result;
}
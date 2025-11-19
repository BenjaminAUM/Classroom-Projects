// 11-3-2025 class assignment, electricity bill calculator
#include <iostream>
using namespace std;

float calculate_bill(int units);

int main()
{
	int user_units;

	cout << "Enter number of Units: ";
	cin >> user_units;

	float total_bill = calculate_bill(user_units);

	cout << "Total bill =" << total_bill << endl;
	return 0;
}

float calculate_bill(int units)
{
	float bill = units;
	float total_bill;

	if (bill <= 100 && bill >= 0)
	{
		total_bill = bill * 1.50;
	}
	else if (bill <= 300 && bill >= 101)
	{
		total_bill = bill * 2.00;
	}
	else if (bill <= 500 && bill >= 301)
	{
		total_bill = bill * 3.00;
	}
	else if (bill > 500)
	{
		total_bill = bill * 5.00;
	}
	else
	{
		//do nothing
	}
	return total_bill;
}
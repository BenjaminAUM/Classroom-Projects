// 11-3-2025 in class assignment, Movie Ticket Revenue Analyzer
#include <iostream>
using namespace std;

float calculate_gross(int adults, int children);
float calculate_tax(float gross);
float calculate_net(float gross, float tax);

int main()
{
	int user_input, user_input_2;
	float gross = 0, tax = 0;

	cout << "How many adults? ";
	cin >> user_input;
	cout << "How many children? ";
	cin >> user_input_2;

	float total_gross = calculate_gross(user_input, user_input_2);
	float total_tax = calculate_tax(total_gross);
	float total_net = calculate_net(total_tax, total_gross);

	cout << "Total Gross: " << total_gross << endl;
	cout << "total tax: " << total_tax << endl;
	cout << "Total net: " << total_net << endl;
	return 0 ;
}

float calculate_gross(int adults, int children)
{
	float result = (adults * 12) + (children * 8);
	return result;
}

float calculate_tax(float gross)
{
	float result = .20 * gross;
	return result;
}

float calculate_net(float gross, float tax)
{
	float result = gross - tax;
	return result;
}
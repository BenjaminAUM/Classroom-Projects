// count Total and average Rainfall
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int user_input, days = 7;
	double total_rainfall = 0.0;
	double average_rainfall = 0.0;

	cout << "Enter in MM how much rain there was in a given day" << endl;

	for (int day = 1; day <= days; day++)
	{
		cout << "Enter rainfall for day " << day << ": ";             //User input
		cin >> user_input;

		if (user_input < 0)                                           //Validate user input is not negative
		{
			cout << "Invalid input, cannot be negative";
		}
		else
		{
			total_rainfall = total_rainfall + user_input;
		}
	}

	average_rainfall = total_rainfall / 7;                         

	cout << "Total rainfall: " << total_rainfall << endl;
	cout << fixed << setprecision(2) << "Average rainfall: " << average_rainfall << endl;
	return 0;
}
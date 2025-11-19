// Inclass problem, Calendar Grid
#include <iostream>
using namespace std;

int main()
{
	int total_weeks = 5;
	int days_per_week = 7;
	int days_in_month = 31;
	int current_day = 1;


	for (int week = 1; week <= total_weeks; week++)
	{
		for (int day = 1; day <= days_per_week; day++)
		{

			cout << current_day;
			current_day += 1;
			if (current_day <= 9)
			{
				cout << "  ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}





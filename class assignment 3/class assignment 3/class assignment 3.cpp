// class assignment 3
#include <iostream>
using namespace std;

int main()
{
	int user_input;
	int longest_odd_streak = 0;
	int longest_even_streak = 0;
	int even_numbers = 0;
	int odd_numbers = 0;
	
	cout << "============================================" << endl;
	cout << "You will be entering 10 numbers even or odd" << endl;
	cout << "============================================" << endl;
	for (int loop_runs = 1; loop_runs <= 10; loop_runs++)
	{
		cout << "Enter a number " << loop_runs << ": ";
		cin >> user_input;

		if (user_input % 2 == 0)                  //checks if user Input when divided by 2 = 0 or does not
		{
			even_numbers = even_numbers + 1;      //if user input divided by 2 = 0 Even counter increases
		}
		else
		{
			odd_numbers = odd_numbers + 1;        //if user input divided by 2 != 0 Odd counter increases
		}
	}
	cout << "=====================" << endl;
	cout << "Total even numbers: " << even_numbers << endl;
	cout << "Total odd numbers: " << odd_numbers << endl;
	cout << "=====================" << endl;
	return 0;
}
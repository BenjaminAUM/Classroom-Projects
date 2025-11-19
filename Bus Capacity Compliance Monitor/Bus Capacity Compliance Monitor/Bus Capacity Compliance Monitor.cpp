// Bus Capacity Compliance Monitor
#include <iostream>
using namespace std;

int main()
{
	int maximum_occupancy = 0, passengers = 0, stops;
	int longest_safe = 0, safe_count = 0, violations = 0;

	cout << "Enter the Maximum bus capacity: ";             //user input
	cin >> maximum_occupancy;
	cout << "Enter how many stops the bus will make: ";     //user input
	cin >> stops;

	cout << "Enter Passenger change at each stop (use + for boarding, - for leaving): " << endl;
	for (int stop = 1; stop <= stops; stop++)
	{
		int change;                    
		cout << "Stop " << ": ";
		cin >> change;

		passengers = passengers + change;
		if (passengers < 0)                    //validate passengers on bus does not go less than 0
		{
			cout << "Invalid Input" << endl;
		}
		else if (passengers <= maximum_occupancy)
		{
			safe_count = safe_count + 1;       //Safe stop, streak increases
			if (safe_count > longest_safe)
			{
				longest_safe = safe_count;
			}
		}
		else
		{
			violations = violations + 1; //Maximum occupancy exceeded
			safe_count = 0;              //streak is broken
		}
	}

	cout << "====Bus Results====" << endl;
	cout << "Maximum occupancy: " << maximum_occupancy << endl;
	cout << "Violations recieved: " << violations << endl;
	cout << "Longest Safe streak: " << longest_safe << endl;
	return 0;
}
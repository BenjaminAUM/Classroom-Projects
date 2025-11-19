// In class problem, Multiplication pyramid
#include <iostream>
using namespace std;

int main()
{
	const int max_number = 5;

	for (int row = 1; row <= max_number; row++)
	{
		for (int number = 1; number <= row; number++)
		{
			cout << number * row << " ";
		}
		cout << endl;
	}
	return 0;
}
// In class problem, Right-Aligned Triangle
#include <iostream>
using namespace std;

int main()
{
	const int max_height = 5;
	

	for (int row = 1; row <= max_height; row++)
	{
		for (int column = 1; column <= max_height - row; column++)
		{
			cout << " ";
		}
		for (int k = 1; k <= row; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
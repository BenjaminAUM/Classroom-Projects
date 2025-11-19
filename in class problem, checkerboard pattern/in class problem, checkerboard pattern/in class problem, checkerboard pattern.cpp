// in class problem, checkerboard pattern
#include <iostream>
using namespace std;

int main()
{
	const int board_size = 8 * 8;

	for (int row = 1; row <= board_size; row++)
	{
		for (int column = 1; column <= board_size; column++)
		{
			int sum = column + row;
			if (sum% 2 == 0)
			{
				cout << "#";
			}
			else
			{
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}
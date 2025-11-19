// inclass problem, concentric number square
#include <iostream>
using namespace std;

int main()
{
	int size;

	cout << "Enter an odd size (eg. 1,3,5,7): ";
	cin >> size;

	double max_size = (size / 2) + 1;

	for (int row = 0; row <= size - 1; row++)
	{
		for (int column = 0; column <= size - 1; column++)
		{
			int top = row, left = column, right = (size - 1) - column, bottom = (size - 1) - row;
			int d = (top, left, right, bottom) / 2;

			int value = (row, column) - d;
			cout << value << " ";
		}
		cout << endl;
		
	}
	return 0;
}
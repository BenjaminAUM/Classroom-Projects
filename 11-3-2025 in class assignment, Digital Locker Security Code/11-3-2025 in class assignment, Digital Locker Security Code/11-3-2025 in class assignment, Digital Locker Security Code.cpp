// 11-3-2025 in class assignment, Digital Locker Security Code
#include <iostream>
using namespace std;

bool is_strong_code(int code);

int main()
{
	int user_input;

	cout << "Enter a 4-digit code: ";
	cin >> user_input;

	bool final_code = is_strong_code(user_input);

	if (final_code == true)
	{
		cout << "Code is strong" << endl;
	}
	else
	{
		cout << "Code is weak" << endl;
	}
	return 0;
}

bool is_strong_code(int code)
{
	float first_digit;
	float last_digit;
	int sum = code;
	int result;

	last_digit = code % 10;

	while (code > 0)
	{
		int digit = code % 10;
		sum = sum + digit;
		first_digit = code;
		code = code  / 10;
		
	}

	if (sum % 2 == 0 && first_digit != last_digit)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

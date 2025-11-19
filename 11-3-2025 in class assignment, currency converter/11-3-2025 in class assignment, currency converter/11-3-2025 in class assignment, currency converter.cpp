// 11-3-2025 in class assignment, currency converter
#include <iostream>
using namespace std;

float usd_to_cny(float usd);
float usd_to_zar(float usd);

int main()
{
	float user_input;
	float user_input_2;
	float result;

	cout << "Enter currency ammount (USD): ";    //first user input
	cin >> user_input;

	cout << "Enter conversion type (0 = CNY, 1 = ZAR): ";    //second user input
	cin >> user_input_2;

	//should validate if user wants convert to CNY or ZAR
	if (user_input_2 == 0)                       //converts Users first input into CNY currency if 0 is entered
	{
		result = usd_to_cny(user_input);
		cout << user_input << "$ USD converted to CNY =" << result << endl;
	}
	else                                        //converts Users first input into ZAR currency if anything greater than 0 is entered
	{
		result = usd_to_zar(user_input);
		cout << user_input << "$ USD converted to ZAR =" << result << endl;
	}
	return 0;
}

float usd_to_cny(float usd)            //Converts from USD to CNY currency
{
	float result;
	result = usd * 7.25;
	return result;
}

float usd_to_zar(float usd)            //Converts from USD to ZAR currency
{
	float result;
	result = usd * 18.30;
	return result;
}
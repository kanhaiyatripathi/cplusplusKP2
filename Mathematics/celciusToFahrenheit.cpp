#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int temp, tempCon;
	char unit;

	cout << "Please enter the temperature and measurement system (c or f): ";
	cin >> temp;
	cin >> unit;
	
	if ( isupper(unit) )
	{
		unit = tolower(unit);
	}

	if (unit == 'f')
	{
		temp = (temp - 32)  / 9.0 * 5.0;
		cout << temp << " degrees Celsius\n";
	}
	else if (unit == 'c')
	{
		temp = 9.0 / 5.0 * temp + 32;
		cout << temp << " degrees Fahrenheit\n";
	}
	else
	{
		cout << "Sorry that unit of measure isn't recognized around here.\n";
	}

	return 0;
}
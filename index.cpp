#include <iostream>

using namespace std;


class values
{
public:
	float num;
	float result;
};

void CF()
{
	values input;

	cout << "number: ";
	cin >> input.num;

	input.result = (input.num * 9 / 5) + 32;

	cout << input.num << "C = " << input.result << "F" << endl;
}

void FC()
{
	values input;

	cout << "number: ";
	cin >> input.num;

	input.result = (input.num - 32) * 5 / 9;

	cout << input.num << "F = " << input.result << "C" << endl;
}

void CK()
{
	values input;

	cout << "number: ";
	cin >> input.num;

	input.result = input.num + 273;

	cout << input.num << "C = " << input.result << "K" << endl;
}

void KC()
{
	values input;

	cout << "number: ";
	cin >> input.num;

	input.result = input.num - 273;

	cout << input.num << "K = " << input.result << "C" << endl;
}

void FK()
{
	values input;

	cout << "number: ";
	cin >> input.num;

	float FKc = (input.num - 32) * 5 / 9;
	input.result = FKc + 273;

	cout << input.num << "F = " << input.result << "K" << endl;
}

void KF()
{
	values input;

	cout << "number: ";
	cin >> input.num;

	float KFc = input.num - 273;
	input.result = (KFc * 9 / 5) + 35;

	cout << input.num << "K = " << input.result << "F" << endl;
}


int main()
{
	int direction;

	cout << "1. Celcius to Fahrenheit" << endl << "2. Fahrenheit to Celcius" << endl << "3. Celcius to Kelvin" << endl << "4. Kelvin to Celcius" << endl << "5. Fahrenheit to Kelvin" << endl << "choice: ";
	cin >> direction;

	switch (direction)
	{
		case 1:
		{
			CF();
			break;
		}
		case 2:
		{
			FC();
			break;
		}
		case 3:
		{
			CK();
			break;
		}
		case 4:
		{
			KC();
			break;
		}
		case 5:
		{
			FK();
			break;
		}
		case 6:
		{
			KF();
			break;
		}
		default:
		{
			cout << "not a valid choice" << endl;
			return 1;
		}
	}
	
	
	return 0;
}

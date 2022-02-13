#include <iostream>

using namespace std;


void CF()
{
	float CFc;

	cout << "number: ";
	cin >> CFc;

	float CFf = (CFc * 9 / 5) + 32;

	cout << CFc << "C = " << CFf << "F" << endl;
}

void FC()
{
	float FCf;

	cout << "number: ";
	cin >> FCf;

	float FCc = (FCf - 32) * 5 / 9;

	cout << FCf << "F = " << FCc << "C" << endl;
}

void CK()
{
	float CKc;

	cout << "number: ";
	cin >> CKc;

	float CKk = CKc + 273;

	cout << CKc << "C = " << CKk << "K" << endl;
}

void KC()
{
	float KCk;

	cout << "number: ";
	cin >> KCk;

	float KCc = KCk - 273;

	cout << KCk << "K = " << KCc << "C" << endl;
}

void FK()
{
	float FKf;

	cout << "number: ";
	cin >> FKf;

	float FKc = (FKf - 32) * 5 / 9;
	float FKk = FKc + 273;

	cout << FKf << "F = " << FKk << "K" << endl;
}

void KF()
{
	float KFk;

	cout << "number: ";
	cin >> KFk;

	float KFc = KFk - 273;
	float KFf = (KFc * 9 / 5) + 35;

	cout << KFk << "K = " << KFf << "F" << endl;
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

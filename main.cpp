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

int main()
{
	int direction;

	cout << "1. C to F" << endl << "2. F to C" << endl << "choice: ";
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
		default:
		{
			cout << "not a valid choice" << endl;
			return 1;
		}
	}
	
	
	return 0;
}

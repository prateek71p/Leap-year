#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

	int month, day, year, dayNum;
	string x;

	do {
		cout << "Enter date in the form: month-day-year: ";
		cin >> month >> day >> year;
		if (((((((year % 4 == 0) && (year % 100 != 0))) || (year % 400 == 0))) && (month >= 3))) {
			day -= 1;
		}
		switch (month)
		{
		case 1:
			dayNum = abs(day);
			break;
		case 2:
			dayNum = 31 + abs(day);
			break;
		case 3:
			dayNum = 59 + abs(day);
			break;
		case 4:
			dayNum = 90 + abs(day);
			break;
		case 5:
			dayNum = 120 + abs(day);
			break;
		case 6:
			dayNum = 151 + abs(day);
			break;
		case 7:
			dayNum = 181 + abs(day);
			break;
		case 8:
			dayNum = 212 + abs(day);
			break;
		case 9:
			dayNum = 243 + abs(day);
			break;
		case 10:
			dayNum = 273 + abs(day);
			break;
		case 11:
			dayNum = 304 + abs(day);
			break;
		case 12:
			dayNum = 334 + abs(day);
			break;
		}
		cout << endl;
		cout << "\nThis is day number " << dayNum << " of the year " << abs(year) << endl;
		cout << "Do you wish to continue yes(y or Y) or no (n or N) : ";
		cin >> x;
		cout << endl << endl;
		if ((x == "y") || (x == "Y")) {
			continue;
		}
		if ((x == "n") || (x == "N")) {
			break;
		}

	} while ((x == "y") || (x == "Y"));

	system("pause");
	return 0;
}
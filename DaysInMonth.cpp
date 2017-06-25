// Name: Ali Bayati 
// Days in A Month  

#include<iostream>
using namespace std;

int main()
{
	bool leapYear;
	int month, year;


	cout << "         Days In A Month " << endl << endl;
	cout << "Enter A Month  ( 1 - 12 ): ";
	cin >> month;
	while (month < 1 || month > 12)
	{
		cout << "Error !!  Month Can't be more than 12 or less than 1 :" << endl;
		cout << "Enter A Month  ( 1 - 12 ): ";
		cin >> month;
	}
	
	cout << "Enter A Year :";
	cin >> year;
	
		
	if ((year % 400 == 0) && (year % 100 == 0) || (year % 4 == 0) && (year % 100 > 0))
		leapYear = true;
	else
		leapYear = false;
			
	
	
	if (leapYear == true&& month == 2)
     	{
				cout << "29 Days \n";
		}
	
		else 
		
			if (month == 1)
				cout << "31 Days \n";
			else if (month == 2)
				cout << "28 Days \n";
			else if (month == 3)
				cout << "31 Days \n";
			else if (month == 4)
				cout << "30 Days \n";
			else if (month == 5)
				cout << "31 Days \n";
			else if (month == 6)
				cout << "30 Days \n";
			else if (month == 7)
				cout << "31 Days \n";
			else if (month == 8)
				cout << "31 Days \n";
			else if (month == 9)
				cout << "30 Days \n";
			else if (month == 10)
				cout << "31 Days \n";
			else if (month == 11)
				cout << "30 Days \n";
			else
				cout << "31 Days \n";
		
			
	return 0;

}
/*output 2/2008
Days In A Month

Enter A Month  ( 1 - 12 ): 2
Enter A Year :2008
29 Days
Press any key to continue . . .

2/2100
Days In A Month

Enter A Month  ( 1 - 12 ): 2
Enter A Year :2100
28 Days
Press any key to continue . . .


9/2014
Days In A Month

Enter A Month  ( 1 - 12 ): 9
Enter A Year :2014
30 Days
Press any key to continue . . .


*/
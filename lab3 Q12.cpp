#include <iostream>
using namespace std;

int main()
{
	int month,year;
	cout << "Enter a month number to obtain how many days are in the month." ;
	cin >> month;
             if(month<1||month>12)
              {
              cout<<"\nThe month number is invalid.";
              }
            if (month == 4 || month == 6 || month == 9 || month == 11)
	{  cout<<"\nNumber of days =30.";}	
		
	else if (month == 02)
	{
	 cout<<"\nEnter the year.";	
	 cin>>year;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            	{  cout<<"\nNumber of days =29.";}
		else 
		cout<<"\nNumber of days =28.";	
	}

	else 
	cout<<"Number of days =31.";

return (0);
}

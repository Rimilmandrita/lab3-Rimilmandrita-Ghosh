#include <iostream>
using namespace std;
 
int main() {
  int day;
 cout << "Enter an integer between 1 to 7. ";
 cin >> day;
 
 switch(day)
 {
 case 1:
	 cout << "\nIt is Monday." << endl;
	 break;
 case 2:
	 cout << "\nIt is Tuesday." << endl;
	 break;
 case 3:
	 cout << "\nIt is Wednesday." << endl;
	 break;
 case 4:
	 cout << "\nIt is Thursday." << endl;
	 break;
 case 5:
	 cout << "\nIt is Friday." << endl;
	 break;
 case 6:
	 cout << "\nIt is Saturday." << endl;
	 break;
 case 7:
	 cout << "\nIt is Sunday." << endl;
	 break;
 default:
	 cout << "Number entered is invalid." << endl;
 }
 
return(0);
 
}

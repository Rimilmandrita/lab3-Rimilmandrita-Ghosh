#include <iostream>
using namespace std;

int main() {
	 float n1, n2, n3;

    cout << "Enter three numbers. ";
    cin >> n1 >> n2 >> n3;
    cout<<"\nThe numbers entered are "<<n1<<","<<n2<<"& "<<n3<<" .";

    if(n1 >= n2 && n1 >= n3)
    {
        cout << "\nLargest number: " << n1;
    }

   else if(n2 >= n1 && n2 >= n3)
    {
        cout << "\nLargest number: " << n2;
    }

   else if(n3 >= n1 && n3 >= n2) 
       { cout << "\nLargest number: " << n3;// your code goes here
       }	
	return 0;
}

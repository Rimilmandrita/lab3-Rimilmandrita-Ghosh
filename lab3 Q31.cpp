#include <iostream>
using namespace std;

int main() {
	
int n,digit=0;
cout<<"Enter any number.";
cin>>n;
while(n>0)
{   n= n/10;
    digit++;
}
cout<<"\nNumber of digits= "<<digit;
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n,rev=0,tmp, dig1,dig2;
	cout<<"Enter any number.";
	cin>>n;
	dig1=n%10;
	cout<<"\nThe last digit is "<<dig1;
	
	while(n>0)
{
 tmp=n%10;
 rev=rev*10+tmp;
 n=n/10;
}
 dig2=rev%10;
 cout<<"\nThe first digit is  "<<dig2;

	return 0;
}

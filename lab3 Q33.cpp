#include <iostream>
using namespace std;

int main() {

	int n,rev=0,tmp,sum, dig1,dig2;
	cout<<"Enter any number.";
	cin>>n;
	dig1=n%10;

	
	while(n>0)
{
 tmp=n%10;
 rev=rev*10+tmp;
 n=n/10;
}
 dig2=rev%10;
sum=dig1+dig2;
cout<<"\nThe sum of 1st and last digit is "<<sum;

// your code goes here
	return 0;

}

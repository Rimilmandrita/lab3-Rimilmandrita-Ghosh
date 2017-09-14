#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int dig,temp,i,n,n1=0;
	cout<<"Enter any number.";
	cin>>n;
	temp=n;
	while(n>0)
	{ n=n/10;
	dig++;
	}
	i=pow(10,dig-1);
	n1=n1+((temp%10)*i)+((temp%i)-(temp%10))+(temp/i); 
	cout<<"\nThe number after swapping first & last digit is "<<n1;
	return 0;
}

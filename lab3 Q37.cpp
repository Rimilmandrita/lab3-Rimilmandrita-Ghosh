#include <iostream>
using namespace std;

int main() {
	int n,rev=0,tmp;
	cout<<"Enter any number.";
	cin>>n;
	while(n>0)
{
 tmp=n%10;
 rev=rev*10+tmp;
 n=n/10;
}
 cout<<"\nThe reverse of the number is "<<rev;
	return 0;
}

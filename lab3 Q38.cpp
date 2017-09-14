#include <iostream>
using namespace std;

int main() {
	int n,n2,rev=0,tmp;
	cout<<"Enter any number.";
	cin>>n;
	n2=n;
while(n>0)
{
 tmp=n%10;
 rev=rev*10+tmp;
 n=n/10;
}
if( rev==n2)
cout<<"\nThe number is a palindrome.";
else
cout<<"\nIt is not a palindrome.";
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
int i=1, n,sum=0;
cout<<"Enter any natural number.";
cin>>n;
while(i<=n)
{
	sum+=i;
	i+=2;
}
 cout<<"\nSum of all odd natural numbers between 1 to n = "<<sum;
 	return 0;
}

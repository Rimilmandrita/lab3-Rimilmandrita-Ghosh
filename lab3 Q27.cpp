#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter any natural number.";
cin>>n;
while(n>0)
{
	sum+=n;
	n--;
}
 cout<<"\nSum upto n natural numbers is= "<<sum;
 	return 0;
}

#include<iostream>
using namespace std;
int main()
{
int i=1, n,prod;
cout<<"Enter any natural number.";
cin>>n;
while(i<=10)
{
	prod=i*n;
	cout<<"\nn*"<<i<<"="<<prod;
	i++;
}
 
 	return 0;
}

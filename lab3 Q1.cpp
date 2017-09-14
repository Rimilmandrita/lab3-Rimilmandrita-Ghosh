#include <iostream>
using namespace std;

int main() {
	int a, b, big;
	cout<<"Enter two number.";
	cin>>a>>b;
	cout<<"\nThe numbers entered are "<<a<<" & "<<b<<".";
	if(a>b)
	{ 
	big=a;
	}
	else
	{
	big=b;
	}
	cout<<"\nBiggest of the two number is "<<big<<".";//your code goes here
	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	float a,b,c;
	cout<<"Enter the length of three sides of triangle.";
	cin>>a>>b>>c;

	if ((a+b>c)&&(b+c>a)&&(c+a>b))
		{
			cout<<"\nTriangle is valid.";
		}	
	else
		cout<<"\nTriangle is not valid.";

	
	return 0;
}

 

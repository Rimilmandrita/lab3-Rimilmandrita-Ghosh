#include<iostream>
using namespace std;
int main()
{
           long int binnum, rem, quot;
	int i=1, j, temp;
	char hexdecnum[100];
	cout<<"Enter Binary Number : ";
	cin>>binnum;
	quot = binnum;
	while(quot!=0)
	{
		temp = quot % 16;
		if( temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdecnum[i++]= temp;
		quot = quot / 16;
	}
	cout<<"Equivalent hexadecimal value of "<<binnum<<" is :\n";
	for(j=i-1 ;j>0;j--)
	{
		cout<<hexdecnum[j];
	}
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	char ch;
	int i;
	cout<<"The printable ascii charecters with values are -";
	for(i=33; i<127; i++)
	{
	ch=i;	
		cout<<'\n'<<i<<"-"<<ch;
	}
	return 0;
}

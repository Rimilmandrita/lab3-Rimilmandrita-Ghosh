#include<iostream>
using namespace std;

int main()
{
	int amt,R2000,R500,R100,R50,R20,R10,R5,R2,R1,count;
	cout<<"Enter amount. ";
	cin>>amt;
	R2000=amt/2000;
	amt=amt%2000;
	R500=amt/500;
	amt=amt%500;
	R100=amt/100;
	amt=amt%100;
	R50=amt/50;
	amt=amt%50;
	R20=amt/20;
	amt=amt%20;
	R10=amt/10;
	amt=amt%10;
	R5=amt/5;
	amt=amt%5;
	R2=amt/2;
	amt=amt%2;
	R1=amt;
	cout<<"\nRs.2000 : "<<R2000<<"\nRs.500 : "<<R500<<"\nRs.100 : "<<R100<<"\nRs. 50 : "<<R50<<
	"\nRs. 20 : "<<R20<<"\nRs.10 : "<<R10<<"\nRs. 5 : "<<R5<<"\nRs.2 : "<<R2<<"\nRs.1 : "<<R1;
           count=R2000+R500+R100+R50+R20+R10+R5+R2+R1;
           cout<<"\nThe total no. of notes ="<<count;
	
	return 0;
}



#include<iostream>
using namespace std;
int main()
{
int num,power,p,prod=1;
cout<<"Enter any number.\n";
cin>>num;
cout<<"Enter it's power.\n";
cin>>power;
p=power;
while(power!=0)
{
 prod=prod*num;
 power--;
}
cout<<num<<"^"<<p<<" = "<<prod;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int num,fact=1,tmp;
cout<<"Enter any number.\n";
cin>>num;
tmp=num;

while(num>0)
{
 fact=fact*num;
 num--;
}
cout<<"factorial of "<<tmp<<" is = "<<fact;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
       float Gsalary,basic;

   cout<<" Enter basic salary . ";
   cin>>basic;
    if(basic<=10000)
   {
   Gsalary=basic+(basic*20)/100+(basic*80)/100;
    cout<<"\nGross salary ="<< Gsalary;
   }
  else if(basic>10000&&basic<=20,000)
  {   Gsalary=basic+(basic*25)/100+(basic*90)/100;
    cout<<"\nGross salary ="<< Gsalary;
  } 
  if(basic>20000)
  {
  Gsalary=basic+(basic*30)/100+(basic*95)/100;
    cout<<"\nGross salary ="<< Gsalary;
  }
  return (0);

}

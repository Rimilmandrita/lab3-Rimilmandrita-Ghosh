#include<iostream>
using namespace std;
int main()
{
      float bill;
      int units;
      cout<<"Enter the elitrical units.";
      cin>>units;
               if(units<=50)
                       bill=units*(0.50);
               else if(units<=150 && units>50)
                       bill=50*(0.50)+(units-50)*(0.75);
              
               else if(units<=250 && units>150)
                       bill=50*(0.50)+100*(0.75)+(units-150)*(1.20);
                 
               else if(units>250)
                       bill=50*(0.50)+100*(0.75)+100*(1.20)+(units-250)*(1.50);       
               cout<<"\nThe elictricity bill is ="<<bill;
  return (0);

}

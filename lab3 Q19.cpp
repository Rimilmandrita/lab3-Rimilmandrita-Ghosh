#include<iostream>
using namespace std;

int main()
{
    
   int m, p, c, b, cs, sum, total = 500;
   float per;

   cout<<"\nEnter marks of 5 subjects. ";
   cin>>m>>p>>c>>b>>cs;

   sum = p + m + c + b + cs;
   
   per = (sum * 100) / total;
   cout<<"\nStudent Percentage is : "<< per<<"%\n";
   if(per>=90)
   cout<<"Grade is A.";
   if(per>=80&&per<90)
   cout<<"Grade is B.";
   if(per>=70&&per<80)
   cout<<"Grade is C.";
   if(per>=60&&per<70)
   cout<<"Grade is D.";
   if(per>=40&&per<60)
   cout<<"Grade is E.";
   if(per<40)
   cout<<"Grade is F.";
   return (0);
}



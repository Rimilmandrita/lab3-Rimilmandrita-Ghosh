#include<iostream>
 
using namespace std;
 
int main()
{  
    char ch;
    cout<<"Enter any alphabet. ";
    cin>>ch;
 
    if(ch>='A'&&ch<='Z')
        cout<<"\nYou entered an uppercase character.";
   
    else if(ch>='a'&&ch<='z')
            cout<<"\nYou entered a lowercase character.";
   
    return 0;
}



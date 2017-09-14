#include<iostream>
 
using namespace std;
 
int main()
{  
    char ch;
    cout<<"Enter any character. ";
    cin>>ch;
 
    if(ch>='A'&&ch<='Z')
        cout<<"\nYou entered an uppercase character.";
    else if(ch>=48&&ch<=57)
            cout<<"\nYou entered a digit.";
    else if(ch>='a'&&ch<='z')
            cout<<"\nYou entered a lowercase character.";
    else
            cout<<"\nYou entered a special character.";
    return 0;
}



#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
 
int main()
{
    int a[20],b[20],c[20],rev[20];
    int h,i,j,k,l,x,fra,flag,rem,num1,num3;
    float rem1,num2,num4,dno;
    char s[20];
    x=fra=flag=rem=0;
    rem1=0.0;
    cout<<"ENTER THE OCTAL NUMBER : ";
    cin>>s;
    for(i=0,j=0,k=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            flag=1;
        }
        else if(flag==0)
            a[j++]=s[i]-48;
        else if(flag==1)
            b[k++]=s[i]-48;
    }
    x=j;
    fra=k;
    for(j=0,i=x-1;j<x;j++,i--)
    {
        rem = rem +(a[j] * pow(8,i));
    }
    for(k=0,i=1;k<fra;k++,i++)
    {
        rem1 = rem1 +(b[k] / pow(8,i));
    }
    rem1=rem+rem1;
    dno=rem1;
    num1=(int)dno;
    num2=dno-num1;
 
    i=0;
    while(num1!=0)
    {
        rem=num1 % 16;
        rev[i] = rem;
        num1=num1 /16;
        i++;
    }
    j=0;
    while(num2!=0.0)
    {
        num2=num2 * 16;
        num3=(int)num2;
        num4=num2-num3;
        num2=num4;
        a[j]=num3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=i;
    cout<<"\nTHE HEXADECIMAL VALUE OF GIVEN OCTAL NO IS : ";
    for(i=l-1;i>=0;i--)
    {
        if(rev[i]==10)
           cout<<"A";
        else if(rev[i]==11)
           cout<<"B";
        else if(rev[i]==12)
           cout<<"C";
        else if(rev[i]==13)
           cout<<"D";
        else if(rev[i]==14)
           cout<<"E";
        else if(rev[i]==15)
           cout<<"F";
        else
        cout<<rev[i];
    }
    h=j;
    cout<<".";
    for(k=0;k<h;k++)
    {
        if(a[k]==10)
           cout<<"A";
        else if(a[k]==11)
           cout<<"B";
        else if(a[k]==12)
           cout<<"C";
        else if(a[k]==13)
           cout<<"D";
        else if(a[k]==14)
           cout<<"E";
        else if(a[k]==15)
           cout<<"F";
        else
        cout<<a[k];
    }
    return 0;
}

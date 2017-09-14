#include<iostream>
using namespace std;
void onescomp(int num)
{
int rem;
 if (num <= 1)
{
 cout << !num;
 return;
}
 rem = num % 2;
 onescomp(num / 2);
 cout << !rem;
}
int main()
{int dec, bin;
cout << "\nEnter the number : ";
cin >> dec;
 if (dec < 0)
 cout << dec << " \nis not a positive integer." << endl;
else
 {
 cout << "\nThe ones complement form of " << dec << " is ";
 onescomp(dec);
 cout << endl;
 }
 return 0;

}

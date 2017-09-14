#include<cmath>
using namespace std;
int main()
{
          long int octnum, decnum=0;
	int i=0;
	cout<<"Enter any Octal Number . ";
	cin>>octnum;
	while(octnum!=0)
	{
		decnum = decnum + (octnum%10) * pow(8, i);
		i++;
		octnum=octnum/10;
	}
	cout<<"\nEquivalent Decimal Value = "<<decnum;
	return 0;
}


#include <iostream>
using namespace std;

int main() {

    int cp,sp,result;

	cout<<"\nEnter cost price of item. ";
	cin>>cp;
	cout<<"\nEnter selling price of item. ";
	cin>>sp;

	result=sp-cp;

	if(result>0)
		cout<<"\nProfit : "<<result;
	else if(result<0)
    			cout<<"\nLoss : "<<-(result);
            else
			cout<<"No profit no loss";
    return 0;
}

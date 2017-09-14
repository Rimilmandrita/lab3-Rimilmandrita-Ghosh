#include<iostream>
 
using namespace std;
   
int main(){
   
    int N, i, j, flag, n;
 
    cout << "Enter the value of N\n";
    cin >> N;
      
    for(i = 2; i <= N; i++){
        flag = 0;
        
        for(j = 2; j <= i/2; j++){
             
             if(i % j == 0){
                 flag = 1;
                 break;
             }
        }
           
        if(flag==0 && N!= 1)
            cout << i << " ";
    }
 
   return 0;
}

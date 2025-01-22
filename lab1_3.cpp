#include<iostream>
using namespace std;

 void odd(int n, int n2){
    
     for(int i=n; i<=n2; i++){
        if(i%2!=0){
            cout<<i<<" ";
       }
    }
 }

int main(){
    int num , num1;
    cout<<"enter starting value ";
    cin>>num;
    cout<<"enter ending value ";
    cin>>num1;

    odd(num,num1);

}
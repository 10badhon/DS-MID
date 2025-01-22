#include<iostream>
using namespace std;

int main(){
    cout<<"enter an integer value ";
    int n;
    cin>>n;
    
    for(int i=2; i<=(n/2); i++){
        if(n%i==0){
            cout<<"not prime ";
            return 0;
        }
    }
    int temp=1;
    for(int i=n-1; i>=2; i--){
        n=n*i;
    }
    cout<<"Factorial is "<< n ;
    
    return 0;
}
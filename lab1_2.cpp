#include<iostream>
using namespace std;
int main(){
    
    cout<<"enter size of array ";
    int n;
    cin>>n;
  
    int arr[n];
    int odd=0,even=0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
           ++even;
        }
        else{
            ++odd;
        }
    }

    cout<<"Total even found "<<even<<endl;
    cout<<"Total odd found "<<odd;

    
}
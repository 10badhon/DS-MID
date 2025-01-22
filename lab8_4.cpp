#include<iostream>
using namespace std;
int main(){
     int arr[9]={11,33,22,66,77,88,44,88,99};
     int n;
     cout<<"Enter element for search ";
     cin>>n;
    
    int f=-1;

     for(int i=0; i<9; i++){
       if(arr[i]==n){
          f=i;
       }
     }
    if(f>-1){
        cout<<"Found at index "<<f;
    }
    else{
        cout<<"Not found ";
    }
    return 0;
}
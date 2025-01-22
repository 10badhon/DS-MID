#include<iostream>
using namespace std;


int main(){

   int arr[]={8,4,6,1,6,9,6,1,9,8};
   
   int s=sizeof(arr)/sizeof(arr[0]);
   int count=0;
   int a;

   cout<<"ENTER NUMBER for SEARCH ";
   cin>>a;


   for( int i=0; i<s; i++ ){
       if(arr[i]==a){
        ++count;
       }
   }

   cout<<"Total "<<count;

   return 0;

 }
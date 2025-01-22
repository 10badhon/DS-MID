#include<iostream>
using namespace std;

int main(){
   int arr1[]={1,4,6,3,6,9};
   int arr2[]={5,8,7,9,21,63};

   int s1=sizeof(arr1)/sizeof(arr1[0]);
   int s2=sizeof(arr2)/sizeof(arr2[0]);
   
   bool flag=true;

   for(int i=0; i<s1; i++){
       for(int j=0; j<s2; j++){
          if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            flag=false;
          }
       }
   }
   if(flag){
    cout<<"No element found";
   }
}
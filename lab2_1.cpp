#include<iostream>
using namespace std;
int main(){
   
    int arr1[]={10,20,30,40,50},arr2[]={1,2,3,4,5,6,7,8};
    
    int s1=sizeof(arr1)/sizeof(arr1[0]);
    int s2=sizeof(arr2)/sizeof(arr2[0]);
  
    int m[s1+s2];

    for(int i=0; i<s1; i++){
        m[i]=arr1[i];
    }

    for(int i=0; i<s2; i++){
        m[s1+i]=arr2[i];
    }

    for(int i=(s1+s2)-1; i>=0; i--){
        cout<<m[i]<<" ";
    }

  return 0;

}
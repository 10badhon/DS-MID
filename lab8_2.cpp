#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array ";
    cin>>n;

    int arr[n];
    cout<<"enter array elements ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
           if(arr[min]>arr[j]){
              min=j;
           }
        }
        if(min != i){
           int temp = arr[i];
           arr[i] = arr[min];
           arr[min] = temp; 
        }
     }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

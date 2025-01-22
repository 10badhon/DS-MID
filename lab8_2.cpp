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

    for(int i=0; i<n; i++){
        int key=arr[i];
        for(int j=i; j<n; j++){
            if(arr[j]<key){
                arr[i]=arr[j];
                arr[j]=key;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
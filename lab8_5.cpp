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
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    int item;
    cout<<"Enter item for search ";
    cin>>item;
    int first=0;
    int last=n;
    int mid=(first+last)/2;
    
    while(first<=last){

            if(item==arr[mid]){
                cout<<"Found at index "<<mid;
                break;
            }
            else if(item>arr[mid]){
                first=mid++;
            }
            else if(item<arr[mid]){
                last=mid--;
            }
    }
    
    
}
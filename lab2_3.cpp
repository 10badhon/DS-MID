#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,4,6,3,6,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = 0;

    bool uni= false;

    for (int i = 0; i < n; ++i) {

        bool Duplicate = true;
        for (int j = 0; j < index; ++j) {
            if (arr[i] == arr[j]) {
                Duplicate = false;
                uni=true;
                break;
            }
        }

        if (Duplicate) {
            arr[index++] = arr[i];
        }
    }

    n = index;
   if(uni){
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] <<" ";
    }
    cout << endl;
   }
   else{
     cout<<"Array already unique";
   }
}

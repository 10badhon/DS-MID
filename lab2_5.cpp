#include <iostream>
using namespace std;

int main() {
    int arr[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    bool visited[10] = {false};

    cout << "Occurrences of elements : "<<endl;

    for (int i = 0; i < 10; i++) {
        if (!visited[i]) {
            int count = 1;
            for (int j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = true;
                }
            }

            cout << arr[i] << " occurs = " <<  count <<" times "<<endl ;
        }
    }

    return 0;
}
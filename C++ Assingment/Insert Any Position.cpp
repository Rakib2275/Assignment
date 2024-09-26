//insert array element in any position
//HackerRank
#include <iostream>
using namespace std;

void insertelement(int arr[], int n, int val, int pos) {

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
}

int main() {
    int arr[10] = {2, 3, 8, 6, 1};
    int n = 5;

    cout<<"Before insertion: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    int val = 10, pos = 2;

    insertelement(arr, n, val, pos);
    n++;

    cout<<"After insertion: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<"\t";
    }


    return 0;
}

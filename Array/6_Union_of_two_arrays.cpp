/* Time Complexity : O(m + n) */

#include <iostream>
using namespace std;

void printArray(int arr[], int n ) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

void printUnion(int a[], int b[], int m, int n) {
    int i=0, j=0;
    while(i<m && j<n) {
        if(a[i]<b[j]) {
            cout<<a[i++];
        }

        else if(a[i]>b[j]) {
            cout<<b[j++];
        }

        else {
            cout<<b[j++];
            i++;
        }
    }

    while(i<m) {
        cout<<a[i++];
    }

    while(j<m) {
        cout<<b[j++];
    }
}

int main() {
    int m, n;
    cout<<"Enter the size for 1st array ";
    cin>>n;
    cout<<"Enter the size for 2nd array ";
    cin>>m;
    int a[m];
    int b[n];
    cout<<"Enter elements first array ";
    for(int i=0; i<m; i++) {
        cin>>a[i];
    }

    cout<<"Enter elements second array ";
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    printArray(a, m);
    printArray(b, n);

    return 0;
}
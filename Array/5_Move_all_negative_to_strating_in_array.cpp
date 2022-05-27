/* An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers. 

Time complexity: O(N) 
Auxiliary Space: O(1)    */


#include <bits/stdc++.h>
using namespace std;

void organiseArray(int arr[], int n) {
    int j;
    for(int i=0; i<n; i++) {
        if(arr[i]<0) {
            if(i != j) {
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

void printArray(int arr[], int n ) {
    for (int i=0; i<n; i++) {
        cout<<" "<<arr[i];
    }
}

int main() {
    int n, k;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in an array ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    organiseArray(arr, n);
    printArray(arr, n);

    return 0;
}
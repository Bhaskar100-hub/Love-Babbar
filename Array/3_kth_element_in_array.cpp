#include<iostream>
#include <algorithm>
using namespace std;

int kthElement(int arr[], int n, int k) {
    sort(arr, arr+n);
    return arr[k-1];
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


    cout<<"Enter the value of k";
    cin>>k;

    cout<<"Kth smallest element is"<<kthElement(arr, n, k);
}
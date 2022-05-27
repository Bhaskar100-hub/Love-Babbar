#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void organiseArray(int arr[], int n) {
    int low = 0, high = n-1;
    while(low<high) {
        if(arr[low]<0) {
            low++;
        }

        else if (arr[high]>0) {
            high--;
        }

        else{
            swap(arr[low],arr[high]);
        }
    }
}

void printArray(int arr[], int n ) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
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
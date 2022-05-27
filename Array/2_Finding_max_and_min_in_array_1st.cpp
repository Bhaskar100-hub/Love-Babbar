/* METHOD 1 (Simple Linear Search) 
Initialize values of min and max as minimum and maximum of the first two elements respectively. Starting from 3rd, compare each element with max and min, and change max and min accordingly (i.e., if the element is smaller than min then change min, else if the element is greater than max then change max, else ignore the element) 

Time Complexity: O(n) 

In this method, the total number of comparisons is 1 + 2(n-2) in the worst case and 1 + n – 2 in the best case. 
In this implementation, the worst case occurs when elements are sorted in descending order and the best case occurs when elements are sorted in ascending order. */

#include<iostream>
using namespace std;

// Pair struct is used to return
// two values from getMinMax()
struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int n) {
    struct Pair minmax;
    int i;

    // If there is only one element
    // then return it as min and max both
    if(n==1) {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }

    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for(i=2; i<n; i++) {
        if(minmax.min>arr[i]) {
            minmax.min=arr[i];
        }

        else if(minmax.max<arr[i]) {
            minmax.max=arr[i];
        }
    }
    return minmax;
}

int main() {
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in an array ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    struct Pair minmax = getMinMax(arr, n);

    cout<<"Maximum in array is "<<minmax.max<<endl;
    cout<<"Mninimum in array is "<<minmax.min<<endl;
}
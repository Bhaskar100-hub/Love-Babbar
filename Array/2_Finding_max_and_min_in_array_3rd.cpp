/* METHOD 3 (Compare in Pairs) 
If n is odd then initialize min and max as first element. 
If n is even then initialize min and max as minimum and maximum of the first two elements respectively. 
For rest of the elements, pick them in pairs and compare their 
maximum and minimum with max and min respectively. 

Time Complexity: O(n)

Total number of comparisons: Different for even and odd n, see below: 

       If n is odd:    3*(n-1)/2  
       If n is even:   1 Initial comparison for initializing min and max, 
                           and 3(n-2)/2 comparisons for rest of the elements  
                      =  1 + 3*(n-2)/2 = 3n/2 -2
Second and third approaches make the equal number of comparisons when n is a power of 2. 
In general, method 3 seems to be the best. */

#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int size) {
    struct Pair minmax;
    int i;

    // If array has even number of elements
    // then initialize the first two elements
    // as minimum and maximum
    if(size%2==0) {
        if(arr[0]<arr[1]) {
            minmax.min=arr[0];
            minmax.max=arr[1];
        }
        else {
            minmax.min=arr[1];
            minmax.max=arr[0];
        }

        // Set the starting index for loop
        i=2;
    }

    // If array has odd number of elements
    // then initialize the first element as
    // minimum and maximum
    else {
        minmax.min=arr[0];
        minmax.max=arr[0];

         // Set the starting index for loop
        i=1;
    }

    // In the while loop, pick elements in
    // pair and compare the pair with max
    // and min so far
    while(i<size-1) {
        if(arr[i]>arr[i+1]) {
            if(arr[i]>minmax.max) {
                minmax.max=arr[i];
            }

            if(arr[i+1]<minmax.min) {
                minmax.min=arr[i+1];
            }
        }

        else {
            if (arr[i + 1] > minmax.max)    
                minmax.max = arr[i + 1];
                 
            if (arr[i] < minmax.min)        
                minmax.min = arr[i];  
        }

        // Increment the index by 2 as
        // two elements are processed in loop
        i += 2;
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
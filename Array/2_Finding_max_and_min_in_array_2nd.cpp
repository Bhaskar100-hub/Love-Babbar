/* METHOD 2 (Tournament Method) 
Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array. 
Time Complexity: O(n) 

Total number of comparisons: let the number of comparisons be T(n). T(n) can be written as follows: 
Algorithmic Paradigm: Divide and Conquer 

             
  T(n) = T(floor(n/2)) + T(ceil(n/2)) + 2  
  T(2) = 1
  T(1) = 0
If n is a power of 2, then we can write T(n) as: 

   T(n) = 2T(n/2) + 2
After solving the above recursion, we get 

  T(n)  = 3n/2 -2
Thus, the approach does 3n/2 -2 comparisons if n is a power of 2. And it does more than 3n/2 -2 comparisons if n is not a power of 2. */

#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int start, int end) {
    struct Pair minmax, mleft, mright;
    int mid;

    // If there is only one element
    if(start==end) {
        minmax.min = arr[start];
        minmax.max = arr[start];
        return minmax;
    }

    // If there are two elements
    if(end == start+1) {
        if(arr[start]<arr[end]) {
            minmax.max=arr[end];
            minmax.min=arr[start];
        }
        else {
            minmax.min=arr[end];
            minmax.max=arr[start];
        }
        return minmax;
    }
    
    // If there are more than 2 elements
    mid = (start+end)/2;
    mleft=getMinMax(arr, start, mid);
    mright=getMinMax(arr, mid+1, end);

    if(mleft.min<mright.min) {
        minmax.min=mleft.min;
    }
    else {
        minmax.min=mright.min;
    }

    if(mleft.max<mright.max) {
        
        minmax.max=mright.max;
    }
    else {
        minmax.max=mleft.max;
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
    struct Pair minmax = getMinMax(arr, 0, n-1);

    cout<<"Maximum in array is "<<minmax.max<<endl;
    cout<<"Mninimum in array is "<<minmax.min<<endl;
}
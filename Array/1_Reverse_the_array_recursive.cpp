/* Recursive Way :
 
1) Initialize start and end indexes as start = 0, end = n-1 
2) Swap arr[start] with arr[end] 
3) Recursively call reverse for rest of the array. 

Time Complexity : O(n) */

// Recursive C++ program to reverse an array
#include<iostream>
using namespace std;

/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
   cout << endl;
}

/* Function to reverse arr[] from start to end */
void rvereseArray(int arr[], int start, int end)
{
    if(start >= end)
    return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // Recursive Function calling
    rvereseArray(arr, start+1, end-1);
} 

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // To print original array
    printArray(arr, n);
     
    // Function calling
    rvereseArray(arr, 0, n-1);
     
    cout << "Reversed array is" << endl;
     
    // To print the Reversed array
    printArray(arr, n);
     
    return 0;
}
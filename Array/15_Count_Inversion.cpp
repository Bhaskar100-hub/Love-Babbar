/* Count Inversion

Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3). */
#include<bits/stdc++.h>
using namespace std;

// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;

int countInversion(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;

    return inv_count;
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are "
         << countInversion(arr, n);
    return 0;
}

/* Complexity Analysis: 
Time Complexity: O(n^2), Two nested loops are needed to traverse the array from start to end, so the Time complexity is O(n^2)
Space Complexity:O(1), No extra space is required. */
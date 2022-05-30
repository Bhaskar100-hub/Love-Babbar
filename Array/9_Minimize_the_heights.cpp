/* Minimize the Heights

Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5. */

// C++ program of above implementation
#include <bits/stdc++.h>
using namespace std;

// User function Template
int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0]; // Maximum possible height difference

    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n - 1];

    for (int i = 1; i < n; i++) {
        if(arr[i] - k < 0) // if on subtracting k we got negative then continue 
        continue;
        tempmin= min(arr[0] + k,arr[i] - k); // Minimum element when we
                                                // add k to whole array
        tempmax = max(arr[i - 1] + k, arr[n - 1] - k); // Maximum element when we
                                                         // subtract k from whole array
        ans = min(ans, tempmax - tempmin); 
    }
    return ans;
}

// Driver Code Starts
int main()
{
    int k = 6, n = 6;
    int arr[n] = { 7, 4, 8, 8, 8, 9 };
    int ans = getMinDiff(arr, n, k);
    cout << ans;
}

// Time Complexity: O(nlogn)
// Auxiliary Space: O(n)
/*Subarray with 0 sum 

Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

Example 1:
Input:
5
4 2 -3 1 6
Output: 
Yes
Explanation: 
2, -3, 1 is the subarray 
with sum 0.
*/

#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n) {
    unordered_set<int> sumSet;

    // Traverse through array 
    // and store prefix sums
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];

        // If prefix sum is 0 or 
        // it is already present
        if (sum == 0 
            || sumSet.find(sum) 
            != sumSet.end())
            return true;

        sumSet.insert(sum);
    }
    return false;
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (subArrayExists(arr, n))
        cout << "Found a subarray with 0 sum";
    else
        cout << "No Such Sub Array Exists!";
    return 0;
}
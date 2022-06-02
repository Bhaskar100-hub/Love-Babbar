/* Count pairs with given sum

Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6. */

#include<bits/stdc++.h>
using namespace std;

int countPairs(int arr[], int n, int k) {
    int a[k]={0};
    for(int i=0; i<n; i++) {
        if(arr[i]<k)
            a[arr[i]]++;
    }
    int count=0;
    if(k%2!=0) {
        for(int i=1;i<=k/2;i++) {
            count+=a[i]*a[k-i];
        }
    }
    else {
        for(int i=1;i<k/2;i++) {
            count+=a[i]*a[k-i];
        }
        count+=(a[k/2]*(a[k/2]-1))/2;
    }
    return count;
}

int main() {
    int n, k, i;
    cin >> n >>k;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << countPairs(arr, n, k);
    return 0;
}
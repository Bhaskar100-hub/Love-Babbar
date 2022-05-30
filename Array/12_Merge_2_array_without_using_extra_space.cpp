/* 12_Merge_2_array_without_using_extra_space.cpp

Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

Example 1:
Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
Explanation: Since you can't use any 
extra space, modify the given arrays
to form 
arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}

*/

#include<bits/stdc++.h>
#include<array>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
        int i=n-1, j=0, temp;
        while (i>=0 && j<m) {
            if(arr1[i] > arr2[j]) {
                temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                i--;
                j++;
            }
            else {
                break;
            }
            
        }
        sort(arr1, arr1 + n);    
        sort(arr2, arr2 + m);

        for(int i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }

        for(int i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
	}
};

int main() {
    int n, m, i;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for (i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    Solution ob;
    ob.merge(arr1, arr2, n, m);
    return 0;
}

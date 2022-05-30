/* Find the Duplicate Number in an Array

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example :
Input: nums = [3,1,3,4,2]
Output: 3


Constraints:
1 <= n <= 105
nums.length == n + 1
1 <= nums[i] <= n
All the integers in nums appear only once except for precisely one integer which appears two or more
*/

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector < int > & arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return arr[i];
        }
    }
}

int main() {
    vector < int > arr;
    arr = {1,3,4,2,2};
    cout << "The duplicate element is " << findDuplicate(arr) << endl;
}
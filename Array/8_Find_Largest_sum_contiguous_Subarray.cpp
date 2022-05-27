/* Kadane's Algorithm 
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray. */

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        int max = arr[0];
        int temp = 0;
        for(int i = 0; i <n; i++) {
            temp += arr[i];
            if(temp<arr[i]) {
                temp = arr[i];
            }
            if(temp>max) {
                max = temp;
            }
        }
        
        return max;
    }
};

// { Driver Code Starts.

int main()
{
    int n;
    cin>>n; //input size of array
        
    int a[n];
        
    for(int i=0;i<n;i++)
        cin>>a[i]; //inputting elements of array
        
    Solution ob;
    
    cout << ob.maxSubarraySum(a, n) << endl;
}
// } Driver Code Ends
/* Given an array, rotate the array by one position in clock-wise direction.
 
Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
 
Example 2:

Input:
N = 8
A[] = {9, 8, 7, 6, 4, 2, 1, 3}
Output:
3 9 8 7 6 4 2 1 */

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int i=0;i<t;i++) {
        cin>>a[i];
    }
    rotate(a, t);
    return 0;
}

void rotate(int arr[], int n)
{
    int last=arr[n-1];
    for (int i=1;i<n;i++) {
        arr[n-i]=arr[n-i-1];
    }
    arr[0]=last;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}
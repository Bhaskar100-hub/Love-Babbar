/* Common elements

Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Example 1:

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only
common elements in A, B and C. */

#include<bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_set<int> a;
            unordered_set<int> b;
            unordered_set<int> c;
            set<int> d;
            vector<int> res;
            for (int i=0; i<n1; i++){
                a.insert(A[i]);
            }
            
            for (int i=0; i<n2; i++){
                b.insert(B[i]);
            }
            
            for (int i=0; i<n3; i++){
                c.insert(C[i]);
            }
            
            for (int i=0; i<n1; i++){
                if (b.find(A[i]) != b.end() && c.find(A[i]) != c.end()){
                    d.insert(A[i]);
                }
            }
            
            for (int x:d){
                
                    res.push_back(x);
                
            }
            return res;
        }

int main() {
    int n1, n2, n3, i;
    
    cin >> n1;
    int arr1[n1];
    for (i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];
    for (i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cin >> n3;
    int arr3[n3];
    for (i = 0; i < n3; i++) {
        cin >> arr3[i];
    }

    vector <int> res = commonElements(arr1, arr2, arr3, n1, n2, n3);
    if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    
    return 0;
}
        
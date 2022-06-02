/* Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. 

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.*/

#include<bits/stdc++.h>
using namespace std;

int bestTime(int arr[], int n) {
    int i=0, profit=0, min=arr[0], index;
    for(i=1; i<n; i++) {
        if(arr[i]<min) {
            min = arr[i];
            index = i;
        }
    }

    int maxAfterMin = arr[index];

    if(index == n-1) {
        return profit;
    }

    for(i=index+1; i<n; i++) {
        if(arr[i]>maxAfterMin) {
            maxAfterMin = arr[i];
        }
    }
    
    profit = maxAfterMin - arr[index];
    return profit;
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << bestTime(arr, n);
    return 0;
}
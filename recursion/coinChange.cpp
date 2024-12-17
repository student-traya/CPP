/*  ********* coin change - count ways to make sum
Given an integer array of coins[] of size n representing different types of denominations and an integer sum, the task is to count all combinations of coins to make a given value sum.
Note:-Assume that you have an infinite supply of each type of coin.
Examples:-
Input: sum = 4, coins[] = [1,2,3]
Output:4
Explanation: There are four solutions [1,1,1,1],[1,1,2],[2,2] and[1,3]
Using Top-Down approach(memoisation)
*/

#include<iostream>
#include<vector>
using namespace std;

int countRecursive(vector<int>& coins, int n, int sum, vector<vector<int>> &memo){
    if(sum == 0) return 1;

    if(sum < 0 || n == 0) return 0;

    // step 3 (return)
    if(memo[n-1][sum] != -1) return memo[n-1][sum];

    //step 2 (store)
    return memo[n-1][sum] = countRecursive(coins, n, sum - coins[n-1], memo) +
    countRecursive(coins, n-1, sum, memo);
}

int count(vector<int> &coins, int sum){
    //step 1(count)
    vector<vector<int>> memo(coins.size(), vector<int>(sum+1, -1));
    return countRecursive(coins, coins.size(), sum, memo);
}

int main(){
    vector<int> coins = {2,3,5,6};
    int sum = 10;
    cout << count(coins, sum);
    return 0;
}
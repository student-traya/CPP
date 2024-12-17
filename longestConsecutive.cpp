/* **************Longest consecutive subsequence******************
Given an array of integers,u need to find the length of longest sub sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order. 
Input: arr[] = {36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42}
Output : 5
Explanation : The subsequence 36, 35, 33, 34, 32 is the longest subsequence of consecutive elements.
*/

#include<iostream>
#include<unordered_set>
using namespace std;

int longestConSequence(int arr[], int n){
    unordered_set<int> S;
    int ans = 0;

    // hash the all array elements
    for(int i = 0; i < n; i++)
    S.insert(arr[i]);

    //check each possible sequence from the start then update optimal length
    for(int i = 0; i < n; i++){

    // if the current element is the starting element of  a sequence
    if(S.find(arr[i-1]) == S.end()){

    // then check for the next elements in the sequence
    int j = arr[i];
    while(S.find(j)!= S.end())
    j++;

    // update optimal length if this length is more
    ans = max(ans , j - arr[i]);
    }
    }
    return ans;
}

int main(){
    int arr[] = { 1, 9, 3, 10, 4, 20, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of longest consecutive subsequence is: " << longestConSequence(arr,n);
    return 0;
}
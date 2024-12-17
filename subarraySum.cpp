/*Given a 1-based indexing array arr[] of integers and an integer sum.U mainly need to return the left and right indexes of that subarray,if no such subarray exists return an array consisting of element -1
**Input:arr[] = {15,2,4,8,9,5,10,23},sum = 23
output: 2 5 (index beween 2 & 5)**
Using sliding window
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int>subarraySum(vector<int>& arr,int sum){
    int s = 0, e = 0; //window initalisation
    vector<int> res;
    int curr = 0;
    for(int i = 0; i < arr.size(); i++){
        curr += arr[i];
        // if current sum becomes more or equal,set the start 
        if(curr >= sum){
            e = i;
            // while current sum is more,remove starting elements of current window
            while(curr > sum && s < e){
                curr -=arr[s];
                ++s;
            }
            // if we found a subarray
            if(curr == sum){
                res.push_back(s+1);
                res.push_back(e+1);
                return res;
            }
        }
    }
return{-1};
}

int main(){
    vector<int> arr = {1, 4, 0, 0, 0, 3, 1, 5};
    int sum = 8;
    vector<int> res = subarraySum(arr,sum);
    for(auto i : res)
    cout << i << " ";
    return 0;
}
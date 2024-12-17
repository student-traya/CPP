/* Given an unsorted array,of positive and negative element both, the task is to find the smallest positive number missing from the array.
Input: arr[] = {2, -3, 4, 1, 1, 7}
Output: 3
Explanation: 3 is the smallest positive number missing from the array.

Approach:-Using cycleSort algorithm
*/

#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        while(arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i]-1]){
            // swap arr[i],arr[arr[i]-1]
            swap(arr[i], arr[arr[i]-1]);
        }
    }
    // if any number is not at it's corressponding index ,then it is a missing number
    for(int i = 1; i <= n; i++){
        if(i != arr[i-1]){
            return i;
        }
        
    }
    return n + 1;
}

int main(){
    vector<int> arr =  {2, -3, 4, 1, 1, 7};
    cout << missingNumber(arr);
    return 0;
}
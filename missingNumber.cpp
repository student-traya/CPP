// Your task is to find missing number from the first n integer
#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& arr){
    int n = arr.size()+1;
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i < n-1; i++){
        xor2 ^= arr[i];
    }
    for(int i = 1; i <= n; i++){
        xor1 ^= i;
    }
    return xor1 ^ xor2;
}

int main(){
    vector<int> arr = {1, 2, 3, 5};
    int n = 5;
    int find = missingNumber(arr);
    cout << find;
    return 0;
}
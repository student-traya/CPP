#include<iostream>
#include<vector>
using namespace std;

int majorityElement(const vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
            count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {4,3,4,5,4,4,6,4};
    cout << majorityElement(arr) << " ";
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int numberOfOcc(vector<int> &arr,int target){
    int res = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == target)
        res++;
    }
    return res;
}
int main(){
    vector<int>arr = {1,1,2,2,2,2,3};
    int target = 2;
    int total = numberOfOcc(arr,target);
    cout << total << " ";
    return 0; 
}
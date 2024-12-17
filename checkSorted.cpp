#include<iostream>
#include<vector>
using namespace std;

bool isSorted(const vector<int> &arr){
    for(int i=1; i<arr.size();i++)
        if(arr[i-1]>arr[i])
        return false;
        return true;
}
int main(){
    vector<int>arr = {23,32,54,21,34,234};
    cout << (isSorted(arr)?"yes\n" : "No\n");
    return 0;
    cout << (isSorted(arr)?"yes\n" : "No\n");
    return 0;
}
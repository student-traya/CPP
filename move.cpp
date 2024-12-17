#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void move(vector<int>& arr){
    sort(arr.begin(), arr.end());
}
int main(){
    vector<int> arr = {-12,34,-21,21,-11,-3,4,-6,8};
    move(arr);
    for(int e : arr)
    cout << e << " ";
    return 0;
}
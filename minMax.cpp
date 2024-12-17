#include<iostream>
#include<limits.h>
using namespace std;

int miniSet(int arr[] , int n){
    int mini = INT_MAX;
    for(int i = 0; i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

int maxiSet(int arr[] , int n){
    int maxi = INT_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
    int arr[] = {4,9,6,5,2,3};
    int n = 6;
    cout << "max element is " << maxiSet(arr , n) << endl;
    cout << "min element is " << miniSet(arr , n) << endl;
    return 0;
}

// Time complexiry O(n)
// Space complexity O(1)
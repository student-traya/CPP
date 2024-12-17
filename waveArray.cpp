#include<iostream>
#include<algorithm>
using namespace std;

void sortArr(int arr[], int n){
    sort(arr, arr+n);
    for(int i = 0; i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int arr[] = {10,5,6,3,2,20,100,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArr(arr, n);
    for(int i = 0; i<n; i++)
    cout << arr[i] << " ";

    return 0;
}
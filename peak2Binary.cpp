// Using simple binary search
// Time complexity O(logN)
// SPace complexity O(logN)
// #include<iostream>
// using namespace std;

// int peakElement(int arr[], int n, int low, int high){
//     int mid = low + (high-low) / 2;

//     if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid] ))
//     return mid;

//     // peak is in left side
//     else if(mid > 0 && arr[mid-1] > arr[mid])
//     return peakElement(arr,low,(mid-1),n);

//     else
//     return peakElement(arr,high,(mid+1),n);
// }
// int findPeak(int arr[] , int n){
//     return peakElement(arr, 0 ,n-1,n);
// }

// int main(){
//     int arr[] = { 1, 31, 20, 4, 1, 0 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Peak element at index is " << findPeak(arr,n);
//     return 0;
// }

// ********iterative binary search************
        //  Time complexity O(logN)
        // SPace complexity O(1)
#include<iostream>
using namespace std;

int peakElement(int arr[], int n){
    int l = 0;
    int h = n-1;
    int mid;

    while(l<=h){
        mid = l + (h - l) / 2;

        if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;

        // peak in on left side , move the right pointer
        else if(mid > 0 && arr[mid-1] > arr[mid])
        h = mid-1;

        else
        l = mid +1;
    }
    return mid;
}

int main(){
    int arr[] = {5,10,20,25};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Peak is at index : " << peakElement(arr,n);
    return 0;
}
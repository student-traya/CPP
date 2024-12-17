#include<iostream>
#include<algorithm>
using namespace std;

int kthLargest(int arr[], int N, int k){
    sort(arr,arr+N);

    return(arr[N-k+1]);
}

int main(){
    int arr[] = { 12, 3, 5, 7, 19 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "kthLargest element is " << kthLargest(arr,N,k);
    return 0;
}
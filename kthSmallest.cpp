// #include<iostream>
// #include<algorithm>
// using namespace std;

// int kthSmallest(int arr[], int N, int k){
//     sort(arr,arr+N);

//     return(arr[k-1]);
// }

// int main(){
//     int arr[] = { 12, 3, 5, 7, 19 };
//     int N = sizeof(arr) / sizeof(arr[0]);
//     int k = 2;
//     cout << "kthSmallest element is " << kthSmallest(arr,N,k);
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;

int kthLargest(int arr[], int N, int k){
    sort(arr,arr+N);

    return(arr[N-k]);
}

int main(){
    int arr[] = { 1,5,3,7,18,12,24,19 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "kthLargest element is " << kthLargest(arr,N,k);
    return 0;
}
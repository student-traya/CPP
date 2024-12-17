// //Find first non repeating elements in a given array of integers

// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int firstNonRepeating(int arr[] , int n){
//     unordered_map<int , int> mp;
//     for(int i = 0; i < n; i++)
//         mp[arr[i]]++;
//          for(int i = 0; i < n; i++)
//          if(mp[arr[i]] == 1)
//          return arr[i];
//          return -1;
// }
// int main(){
//     int arr[] = { 2,3,14,6,2,3 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << firstNonRepeating(arr,n);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int findUnique(int arr[], int n){
//     int xorNR = 0;
//     for(int i = 0; i<n;i++){
//         xorNR ^= arr[i];
//     }
//     return xorNR;
// }
// int main(){
//     int arr[] = {2,3,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << findUnique(arr, n) << " ";
//     return 0;
// }
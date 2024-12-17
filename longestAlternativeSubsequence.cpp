/* A sequence {x1,x2,...,xn} is an alternating sequence if its satisfy one of the following relation:-
X1 < X2 > X3 < X4 > X5 < …. xn or 
X1 > X2 < X3 > X4 < X5 > …. xn
Ex: Input: arr[] = {10, 22, 9, 33, 49, 50, 31, 60}
Output: 6
Explanation: The subsequences {10, 22, 9, 33, 31, 60} or
{10, 22, 9, 49, 31, 60} or {10, 22, 9, 50, 31, 60}
are longest subsequence of length 6
*/
#include<iostream>
using namespace std;

int LAS(int arr[], int n){
    int inc = 1;
    int dec = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            inc = dec + 1;
        }
        else if(arr[i-1] > arr[i]){
            dec = inc + 1;
        }
    }
    return max(inc, dec);
}

int main(){
    int arr[] = { 1, 5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Longest alternative subsequence is : " << LAS(arr,n);
    return 0;
}
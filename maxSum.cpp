#include<iostream>
using namespace std;
int max(int x, int y){return (x > y) ? x:y; }

int maxPathSum(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    int result = 0;
    int sum1 = 0, sum2 = 0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j])
            sum1 += arr1[i++];

            else if(arr1[i] > arr2[j])
            sum2 += arr2[j++];
            // now, we come to the common point .Take the maxm of two sum and add into the result.Also add the common element once
            else{
                result += max(sum1 , sum2) + arr1[i];

                // update sum1 and sum2 for elements after this intersection point
                sum1 = 0, sum2 = 0;
                // update i and j move to the next element of each array
                i++;
                j++;
            }
    }
    // add remeaning element of arr1
    while(i < m)
    sum1 += arr1[i++];

    while(j < n)
    sum2 += arr2[j++];
    
    result += max(sum1 , sum2);
    return result;
}

int main(){
    int arr1[] = {2, 3, 7, 10, 12, 15, 30, 34 };
    int arr2[] = {1, 5, 7, 8, 10, 15, 16, 19 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout <<"Maximium path sum is:" <<maxPathSum(arr1, arr2, m, n);
    return 0;
}

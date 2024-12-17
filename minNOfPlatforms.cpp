/*  Min^m no of platform required so that no train waits.
Input : arr[] = {01:00, 03:00, 05:00};
        dep[] = {09:00, 04:00, 06:00};
Output : 2
*/
#include<iostream>
#include<algorithm>
using namespace std;

int minPlatform(int arr[], int dep[], int n){
    sort(arr, arr + n);
    sort(dep, dep + n);

    // plat_needed indicates number of platform needed at a time
    int plat_needed = 1 , result = 1;
    int i = 1, j = 0;

    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            plat_needed++;
            i++;
        }
        else if(arr[i] > dep[j]){
            plat_needed--;
            j++;
        }
        // update if result is needed
        if(plat_needed > result)
        result = plat_needed;
    }
    return result;
}

int main(){
    int arr[] = { 100, 300, 500 };
    int dep[] = { 900, 400, 600 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "minimium number of platform is : " << minPlatform(arr,dep,n);
    return 0;
}
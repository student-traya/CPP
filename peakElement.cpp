#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    if (n == 1)
        return 0;
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
        return n - 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i-1] && arr[i] >= arr[i + 1])
            return i;
    }
}

int main()
{
    int arr[] = {5,10,20,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"Index of peak element is " << peakElement(arr,n);
    return 0;
}
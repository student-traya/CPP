// write a program in cpp to sort the elements of an array.
#include <iostream>
using namespace std;
void sortArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            swap(arr[i+1], arr[i]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[] = {23, 44, 12, 35, 52};
    sortArr(arr, n);
    return 0;
}
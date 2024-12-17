#include <iostream>
#include <vector>
using namespace std;

void segrigate0And1(vector<int> &arr)
{
    int count = 0;
    for (int x : arr)
        if (x == 0)
            count++;
            for(int i =0; i<count; i++)
            arr[i] = 0;

            for(int i=count; i<arr.size(); i++)
            arr[i] = 1;
}
int main(){
    vector<int>arr = {0,1,0,1,1,1};
    segrigate0And1(arr);
    cout << "Array after segrigation is ";
    for(int x : arr)
    cout << x << " ";
    return 0;
}
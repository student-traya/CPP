#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int majorityElement(const vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> countMap;

    for (int num : arr)
    {
        countMap[num]++;
        if (countMap[num] > n / 2)
        {
            return num;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 3, 4, 5, 4, 4, 6};
    cout << majorityElement(arr) << endl;
    return 0;
}
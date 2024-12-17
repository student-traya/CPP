// Display the longest Name
#include <iostream>
#include<vector>
using namespace std;
// Function to display the longest name contained in the array
vector<string> solve(string *arr, int N)
{
    // edge case
    if (N == 0)
        return {};

    // initialize MAx
    int Max = arr[0].size();
    // create an array res
    vector<string> res;
    // insert first element in res
    res.push_back(arr[0]);
    // traverse the array
    for (int i = 1; i < N ; i++)
    {
        // if string with greater length is foud
        if (arr[i].size() > Max)
        {
            Max = arr[i].size();
            res.clear();
            res.push_back(arr[i]);
        }
        // if string with current max length
        else if (arr[i].size() == Max)
        {
            res.push_back(arr[i]);
        }
    }
    // return the final ans
    return res;
}
int main()
{
    string arr[] = {"GeeksforGeeks", "FreeCodeCamp","StackOverFlow","MyCodeSchool"};

    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    vector<string> v = solve(arr, N);

    // Printing the answer
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& arr){
    sort(arr.begin(), arr.end());
    string first = arr.front();
    string last = arr.back();
    int minLength = min(first.size(), last.size());

    int i = 0;
    while(i < minLength && first[i] == last[i]){
        i++;
    }
    return first.substr(0,i);
}

int main(){
    vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geezer"};
    cout << longestCommonPrefix(arr) << endl;
    return 0;
}
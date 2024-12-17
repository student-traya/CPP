#include<iostream>
using namespace std;

bool isPalindrome(string s, int i){
    //base case
    if(i > s.size()/2){
        return true;
    }
    return s[i] = s[s.size()-i-1] && isPalindrome(s, i+1);
}

int main(){
    string s = "malayalam";
    if(isPalindrome(s, 0))
    cout << "Yes";
    else
    cout << "N0";
    return 0;
}
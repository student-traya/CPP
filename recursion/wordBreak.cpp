/* Given an input string and a dictionary of words, find out if the input string can be segmented into a space-separated sequence of dictionary words. See following examples for more details. 
This is a famous Google interview question, also being asked by many other companies now a days.
Consider the following dictionary 
{ i, like, sam, sung, samsung, mobile, ice, 
 cream, icecream, man, go, mango}

Input: ilike
Output: Yes 
The string can be segmented as “i like”.

Input: ilikesamsung
Output: Yes
The string can be segmented as “i like samsung” 
or “i like sam sung”.
*/
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// Returns true if dictionary d contains the given word
bool isInDict(const string &word, unordered_set<string>& d){
    return d.find(word) != d.end();
}
// Returns true of a given string can be broken into dictionary d words, else false
bool wordBreak(const string &str, unordered_set<string>&d){
    int n = str.size();

    vector<bool> dp(n+1,false);
    dp[0] = true;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(dp[j] && isInDict(str.substr(j, i - j), d)){
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main(){
    vector<string> words = {"mobile", "samsung", "sam", "sung", "man", "mango", "icecream", "and", "go" , "i", "like", "ice", "cream"};
    unordered_set<string> d(words.begin(), words.end());

    cout << (wordBreak("ilikesamsung",d) ? "Yes\n" : "No\n");
    cout << (wordBreak("iiiiiiii",d) ? "Yes\n" : "No\n");
    cout << (wordBreak("",d) ? "Yes\n" : "No\n");
    cout << (wordBreak("ilikelikeimangoiii",d) ? "Yes\n" : "No\n");
    cout << (wordBreak("samsungandmango",d) ? "Yes\n" : "No\n");
    cout << (wordBreak("samsungandmangok",d) ? "Yes\n" : "No\n");
    return 0;
}
/* Print all combination of valid parenthesis.
Input : n=2
Output: {}{}
        {{}}
Explanation: Theses are the only two sequences of balanced parenthesis formed using 2 pair of balanced parenthesis. 
*/
#include<iostream>
#include<vector>
using namespace std;

void allParenthesis(int n, int open, int close, string s, vector<string>& ans){
    if(open == n && close == n){
        ans.push_back(s);
        return;
    }
    if(open < n){
        allParenthesis(n, open+1, close, s+"{", ans);
    }
    if(close < open){
        allParenthesis(n, open, close+1, s+"}", ans);
    }
}
vector<string> cBracket(int n){
    vector<string> ans;
    if(n > 0)
    allParenthesis(n, 0, 0, "",ans);
    return ans;
}
int main(){
    int n = 3;
    vector<string> ans = cBracket(n);
    for(string str : ans){
        cout << str << endl;
    }
    return 0;
}
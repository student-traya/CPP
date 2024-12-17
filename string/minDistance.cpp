/* Find the minimum distance between the given two words
Input: S = { “the”, “quick”, “brown”, “fox”, “quick”}, word1 = “the”, word2 = “fox”
Output: 3
Explanation: Minimum distance between the words “the” and “fox” is 3
*/
#include<iostream>
#include<vector>
using namespace std;

int minDistance(vector<string>& s, string word1, string word2){
    int d1 = -1, d2 = -1;
    int ans = 35653632;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == word1)
        d1 = i;
        if(s[i] == word2)
        d2 = i;
        if(d1 != -1 && d2 != -1)
        ans = min(ans, abs(d1-d2));
    }
    return ans;
}
int main(){
    vector<string> s = { "the", "quick", "brown", "fox", "quick"};
    string word1 = "the" , word2 = "fox";
    cout <<  minDistance(s, word1, word2);
    return 0;
}
/* Count distinct subsequence
Revision required
Input: str = “gfg”
Output: 7
Explanation: The seven distinct subsequences are “”, “g”, “f”, “gf”, “fg”, “gg” and “gfg” 
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;

int countSub (string s) {
    map<char, int> mp;

    int n = s.size();
    int allCount = 0, levelCount = 0;

    for(int i = 0; i < n; i++){
        char c = s[i];

        if( i == 0){
            allCount = levelCount = 1;
            mp[c] = 1;
            continue;
        }
        levelCount = allCount + 1;
        if(mp.find(c) == mp.end()){
            allCount += levelCount;
        } else {
            allCount += levelCount - mp[c];
        }
        mp[c] = levelCount;
    }
    return allCount;
}

int main(){
    string list[] = {"abab", "gfg"};
    for(string s : list) {
        int cnt = countSub(s);
        int withEmptyString = cnt + 1;

        cout << "With empty string count for " << s << " is " << withEmptyString << endl;
        cout << "Without empty string count for " << s << " is " << cnt << endl;
    }
    return 0;
}
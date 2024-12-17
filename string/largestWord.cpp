/* Find largest word in dictionary by deleting some characters of given string
Giving a dictionary and a strinInput : dict = {"ale", "apple", "monkey", "plea"}   
        str = "abpcplea"  
Output : apple 

Input  : dict = {"pintu", "geeksfor", "geeksgeeks", 
                                        " forgeek"} 
         str = "geeksforgeeks"
Output : geeksgeeksg ‘str’, find the longest string in dictionary which can be formed by deleting some characters of the given ‘str’.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isSubsequence(string str1, string str2){
    int m = str1.length(), n = str2.length();
    int j = 0;

    for(int i = 0; i < n && j < m; i++)
    if(str1[j] == str2[i])
    j++;
    return(j == m);
}
string findLongestString(vector<string> dict, string str){
    string result = " ";
    int length = 0;

    for(string word : dict){
        if(length < word.length() && isSubsequence(word, str)){
            result = word;
            length = word.length();
        }
    }
    return result;
}

int main(){
    vector<string> dict = { "ale", "apple", "monkey", "plea" };
    string str = "abpcplea";
    cout << findLongestString(dict, str) << endl;
    return 0;
}
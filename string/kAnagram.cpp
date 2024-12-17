/*Check if the two string are K-anagram or not
Given two strings of lowercase alphabets and a value k, the task is to find if two strings are K-anagrams of each other or not.
Two strings are called k-anagrams if following two conditions are true. 

1.Both have same number of characters.
2.Two strings can become anagram by changing at most k characters in a string.
Input:  str1 = "anagram" , str2 = "grammar" , k = 3
Output:  Yes
Explanation: We can update maximum 3 values and 
it can be done in changing only 'r' to 'n' 
and 'm' to 'a' in str2.
*/
#include<iostream>
using namespace std;
const int MAX_CHAR = 26;

bool areKAnagram(string str1, string str2, int k){
    int n = str1.length();
    if(str2.length() != n)
    return false;

    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};

    // Store all the occurence of all characters that are different in both strings...
    for(int i = 0; i < n; i++)
    count1[str1[i]-'a']++;
    for(int i = 0; i < n; i++)
    count2[str2[i]-'a']++;

    int count = 0;
    for(int i = 0; i < MAX_CHAR; i++)
    if(count1[i] > count2[i])
    count = count + abs(count1[i] - count2[i]);
    return (count <= k);
}

int main(){
    string str1 = "anagram";
    string str2 = "grammar";
    int k = 2;
    if(areKAnagram(str1, str2, k))
    cout << "Yes";
    else
    cout << "No";
    return 0;
}
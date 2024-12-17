/* #GO THROUGH AT LEAST TWO TIMES
Print all Palindromic Partitions of a String using Bit Manipulation.
Given a string, find all possible palindromic partitions of a given string.
Note that this problem is different from Palindrome Partitioning Problem, there the task was to find the partitioning with minimum cuts in input string. Here we need to print all possible partitions.
EX:-
Input:  nitin
Output: n i t i n
             n iti n
             nitin



Input:  geeks
Output: g e e k s
             g ee k s
*/
#include<iostream>
#include<vector>
using namespace std;

class Gfg{
    public:
    vector<vector<string> >ans;
    bool checkPalindrome(vector<string> currPartition){
        for(auto s : currPartition){
            int n = s.size();
            int i = 0, j = n-1;
            while(i < j){
                if(s[i] != s[j])
                return false;
                i++;
                j--;
            }
        }
        return true;
    }
    void generatePartition(string& s, string& bitString){
        vector<string> currPartition;
        string subString;
        subString.push_back(s[0]);
        for(int i = 0; i < bitString.size(); i++){
            if(bitString[i] == '0'){
                subString.push_back(s[i+1]);
            }
            else{
                currPartition.push_back(subString);
                subString.clear();
                subString.push_back(s[i+1]);
            }
        }
        currPartition.push_back(subString);
        if(checkPalindrome(currPartition)){
            ans.push_back(currPartition);
        }
    }
    void bitManipulation(string& s, string& bitString){
        if(bitString.size() == s.size()-1){
            generatePartition(s, bitString);
            return;
        }
        bitString.push_back('1');
        bitManipulation(s, bitString);
        bitString.pop_back();
        bitString.push_back('0');
        bitManipulation(s, bitString);
        bitString.pop_back();
    }
    // return all the palindromic partition of string s
    vector<vector<string> > Partition(string s){
        string bitString;
        bitManipulation(s, bitString);
        return ans;
    }
};

int main(){
    Gfg ob;
    // store all the partition
    vector<vector<string> > ans;
    string s = "nitin";
    ans = ob.Partition(s);
    for(auto& v : ans){
        for(auto& it : v){
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}
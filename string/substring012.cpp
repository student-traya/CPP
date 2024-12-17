/* Count substring with equal number of 0s,1s and 2s
Input: str = “0102010”
Output:  2
Explanation: Substring str[2, 4] = “102” and substring str[4, 6] = “201” has equal number of 0, 1 and 2


Input: str = “102100211”
Output: 5
using hashing
*/
#include<iostream>
#include<map>
#include<vector>
using namespace std;

long long getSubstringWithEqual012(string s){
    vector<string> arr;
    int n = s.size();
    //generating subarrays
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            string s1 = " ";
            for(int k = i; k <= j; k++){
                s1 += s[k];
            }
            arr.push_back(s1);
        }
    }
    int count = 0;
    int countZero, countOne, countTwo;
    // iterating over arr of all substring
    for(int i = 0; i < arr.size(); i++){
        countZero = 0;
        countOne = 0;
        countTwo = 0;
        string curs = arr[i];
        for(int j = 0; j < curs.size(); j++){
            if(curs[j] == '0')
            countZero++;
            if(curs[j] == '1')
            countOne++;
            if(curs[j] == '2')
            countTwo++;
        }
        if(countZero == countOne && countOne == countTwo){
            count++;
        }
    }
    return count;
}

int main(){
    string s = "0102010";
    cout << getSubstringWithEqual012(s) << endl;
    return 0;
}
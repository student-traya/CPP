/* Sum of two large number
Time Complexity: O(n1+n2) where n1 and n2 are lengths of two input strings representing numbers.
Auxiliary Space: O(max(n1, n2))*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string findSum(string str1, string str2){
    if(str1.length() > str2.length())
    swap(str1,str2);

    string str = " ";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for(int i = 0; i < n1; i++){
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum/10;
    }
    // add remaining digit of large number
    for(int i = n1; i < n2; i++){
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum/10;
    }
    if(carry)
    str.push_back(carry + '0');
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string str1 ="3333311111111111";
    string str2 ="44422222221111" ;
    cout << findSum(str1, str2);
    return 0;
}
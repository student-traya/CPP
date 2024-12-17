#include<iostream>
using namespace std;
bool isVowel(char ch){
    ch = toupper(ch);
    return {ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'};
}
int countVowel(string str){
int count = 0;
for(int i=0; i<str.length(); i++)
    if(isVowel(str[i]))
    count++;
    return count;
}
int main(){
    string str = "abcdeioj";
    cout << countVowel(str) << endl;
    return 0;
}
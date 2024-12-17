#include<iostream>
#include<sstream>
using namespace std;
bool isWordPresent(string sentence, string word){
    // to break the sentence in word we use stringstream
    stringstream s(sentence);
    // to temperory store each individual word
    string temp;
    while(s>>temp){
        if(temp.compare(word)==0){
            return true;
        }
    }
    return false;
}
int main(){
    string s = "college for student";
    string word = "study";
    if(isWordPresent(s , word))
    cout << "yes";
    else
    cout << "No";
    return 0;
}
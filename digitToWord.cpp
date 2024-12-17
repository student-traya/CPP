#include<iostream>
#include<map>
#include<string>
using namespace std;

void change(string N){
    map<char,string> digit{
        {'1',"One"},{'2',"Two"},{'3',"Three"},{'4',"Four"},{'5',"Five"},{'6',"Six"},{'7',"Seven"},
        {'8',"Eight"},{'9',"Nine"},{'0',"Zero"}
    };
        for(char number:N){
            cout << digit[number] << " ";
        }
    }
    int main(){
        string N = "123";
        change(N);
        return 0;
    }
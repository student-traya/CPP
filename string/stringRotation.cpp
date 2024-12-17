#include<iostream>
#include<string>
using namespace std;

bool isRotate(string str1, string str2){
    int n = str1.length();
    bool clock_wise = true, anti_clock_wise = true;
    // check if str2 can be obtained by rotating str1 in clock_wise direction by 2 place
    for(int i = 0; i < n; i++){
        if(str1[i] != str2[(i + 2)%n]){
            clock_wise = false;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(str1[(i + 2)%n] != str2[i]){
            anti_clock_wise = false;
            break;
        }
    }
    return clock_wise or anti_clock_wise;
}

int main(){
    string str1 = "amazon";
    string str2 = "azonam";
    if(isRotate(str1, str2)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

    str1 = "amazon";
    str2 = "onamaz";
    if(isRotate(str1, str2)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    return 0;
}
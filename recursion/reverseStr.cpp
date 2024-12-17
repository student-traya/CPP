#include<iostream>
using namespace std;

void reverseStr(char *str, int index, int n){
    if(index == n)
    return;
    char temp = str[index];
    reverseStr(str,index+1, n);
    cout << temp;
}

int main(){
    char a[] = "niraj kumar";
    int n = sizeof(a) / sizeof(a[0]);
    reverseStr(a, 0, n);
    return 0;
}
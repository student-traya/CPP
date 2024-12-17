#include<iostream>
using namespace std;

void fiboReverse(int n, int a, int b){
    if(n > 0){
        fiboReverse(n-1, b, a+b);
        cout << a <<" ";
    }
}

int main(){
    int n = 10;
    fiboReverse(n, 0,1);
    return 0;
}
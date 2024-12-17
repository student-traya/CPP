#include<iostream>
using namespace std;
int recursiveSum(int n){
    if(n <= 1)
    return n;
    return n + recursiveSum(n-1);
}
int main(){
    int n = 5;
    cout << recursiveSum(n);
    return 0;
}
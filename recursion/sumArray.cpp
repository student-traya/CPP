#include<iostream>
using namespace std;

int calcSum(int A[], int n){
    if(n <= 0)
    return 0;
    else
    return(calcSum(A, n-1) + A[n-1]);
}

int main(){
    int A[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Sum is : " << calcSum(A, n);
    return 0;
}
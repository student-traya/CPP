#include<iostream>
using namespace std;

int binToGrey(int n){
    if(!n)
    return 0;
    //last digit
    int a = n % 10;
    //second last digit
    int b = (n/10) % 10;
    //if the last two bit are different
    if((a && !b) || (!a && b))
    return(1 + 10*binToGrey(n/10));
    // if the last two bit are same
    return(10*binToGrey(n/10));
}

int main(){
    int n = 1011101;
    cout <<"Grey code will be: " << binToGrey(n);
    return 0;
}
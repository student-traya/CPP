#include<iostream>
using namespace std;

bool isPerfectSquare(long long n){
    if(n==0){
        return true;
    }
    long long odd =1;
    while(n>0){
        n-=odd;
        odd+=2; 
    }
    return n==0;
}
int main(){
    long long x = 25;
    if(isPerfectSquare(x))
        cout << "yes" ;
        else
        cout << "No";
    return 0;
}
/* we know that perfect square is the sum of previously consceutive odd number
1+3 = 4
1+3+5 = 9
1+3+5+7 = 16
*/
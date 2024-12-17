#include<iostream>
using namespace std;
class sum{
    public:
    getSum(int n){
    int sum = 0;
    while(n!=0){
        // int digit = n%10;
        // sum = sum + digit;
        sum = sum + n%10;
        n = n /10;
    }
        return sum;
    }
};

int main(){
    sum s;
    int n = 1231333333;
    cout << s.getSum(n);
    return 0;
}
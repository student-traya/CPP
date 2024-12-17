#include<iostream>
#include<math.h>
using namespace std;

int diff(int n){
    int sumOfSquare = 0;
    int sum = 0;
    for(int i=1; i<=n;i++){
        sumOfSquare+= pow(i,2);
        sum+=i;
        cout << sumOfSquare << endl;
    }
    int squareOfSum = pow(sum,2);
    cout << squareOfSum << endl;
    int absDifference = abs(sumOfSquare-squareOfSum);
    return absDifference;
}
int main(){
    int n =6;
    cout << diff(n);
    return 0;
}
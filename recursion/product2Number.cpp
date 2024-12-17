#include<iostream>
using namespace std;
int product(int x, int y){
    if(x < y)
    return product(y, x);
    else if(y != 0)
    return (x + product(x, y-1));
    else 
    return 0;
}

int main(){
    int x = 11;
    int y = 28;
    cout << "product is : " << product(x, y);
    return 0;
}
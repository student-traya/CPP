#include<iostream>
using namespace std;

int find(int dec_number){
    if(dec_number == 0)
    return 0;
    else
    return (dec_number % 2 + 10*find(dec_number /2));
}

int main(){
    int dec_number = 255;
    cout << "binary is : " << find(dec_number) ;
    return 0;
}
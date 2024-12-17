#include<iostream>
using namespace std;

void reverse(int name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}


int main(){
    char name[23];
    cout << "Enter the string :" << endl;
    cin >> name;
    int n = strlen(name);
    cin >> n;

    reverse(name,n);
    cout << "reverse string is :" << name << endl;
    return 0;
}
#include<iostream>
using namespace std;
 void reverseArrUsingExtra(int arr[],int size){
    int reversedArr[size];
    for(int i=0;i<size;i++){
        reversedArr[i] = arr[size-i-1];
    }

    // print reversed array
    cout<<"reversed array";
    for(int i=0;i<size;i++){
        cout<<reversedArr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[] = {3,4,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArrUsingExtra(arr,size);
}
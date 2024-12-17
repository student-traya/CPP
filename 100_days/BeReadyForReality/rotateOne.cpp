# include<iostream>
using namespace std;

void rotateOne(int arr[],int n){
    int lastEle = arr[n-1];
    for(int i = n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = lastEle;
}

int main(){
    int arr[] = {7,11,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    // printing initial array
    cout<<"Given array is :\n";
    for(int i = 0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    rotateOne(arr,n);

    // printing rotated  array
    cout<<"\n rotated array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
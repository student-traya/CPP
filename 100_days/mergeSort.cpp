# include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy the value
    int mainArrayindex =s;
    for(int i =0;i<len1;i++){
        first[i] = arr[mainArrayindex++];
    }

    mainArrayindex =mid+1;
    for(int i =0;i<len2;i++){
        second[i] = arr[mainArrayindex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayindex++] = first[index1++];
        }else{
            arr[mainArrayindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayindex++] = second[index2++];
    }
    
    
}

void mergeSort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;

    // left and right
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){
    int arr[] = {3,45,1,56,23};
    int n = 5;
    mergeSort(arr,0,n-1);
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}
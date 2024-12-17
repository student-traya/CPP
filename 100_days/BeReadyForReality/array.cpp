# include<iostream>
# include<limits.h>
using namespace std;

bool isTarget(int arr[][3],int target,int row,int col){
      for(int row =0;row<3;row++){
        for(int col =0;col<3;col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

// row sum

void sum(int arr[][3],int row ,int col){
    cout<<"Printing the sum" << endl;
      for(int row =0;row<3;row++){
        int sum = 0;
        for(int col =0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<< sum << " ";
    }
}

int largestRowSum(int arr[][3],int row , int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
       for(int row =0;row<3;row++){
        int sum = 0;
        for(int col =0;col<3;col++){
            sum+=arr[row][col];
        }
            if(sum > maxi){
                sum = maxi;
                rowIndex = row;
            }
        }
        cout << "The maximium sum is " << maxi << endl;
        return row;
    }


int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // taking input
    cout<<"Enter the element" << endl;
    for(int row =0;row<3;row++){
        for(int col =0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    // printing
    cout<<"Print the element" << endl;
    for(int row =0;row<3;row++){
        for(int col =0;col<3;col++){
            cout<<arr[row][col] << " ";
        }cout << endl;
    }

    cout<<"Enter the number to search" << endl;
    int target;
    cin>>target;
    if(isTarget(arr,target,3,4)){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }cout<<endl;

    sum(arr,3,3);
    int ansIndex = largestRowSum(arr,3,3);
    cout << "Max sum at index : " << ansIndex <<endl;
    return 0;
}
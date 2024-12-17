/*Given a 2D array, which is sorted.Find the maximium number of 1S 
in a row
                0 1 1 1 
                0 0 1 1 
                1 1 1 1
                0 0 0 0
 */
#include<iostream>
#include<vector>
using namespace std;
int max1s(vector<bool>& arr, int low, int high){
    int idx = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] ==1){
        idx = mid;
        high = mid - 1;
        }
        else{ 
        low = mid + 1;
    }
}
return idx;
}

// Function that return index of row with maximium no's of 1
int rowWithMax1(vector<vector<bool>>& mat){
int max_row_index = -1, max = -1;
int row = mat.size();
int col = mat[0].size();

// traverse the each row and count number of 1's by finding the index of first 1
for(int i = 0; i < row; i++){
    int index = max1s(mat[i], 0 , col-1);
    if(index != -1 && col-index > max){
        max = col-index;
        max_row_index = i;
    }
}
return max_row_index;
}

int main(){
    vector<vector<bool>> mat = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    cout << rowWithMax1(mat) << " ";
    return 0;
}

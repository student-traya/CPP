/*  Missing and Repeating in an array
   Input : arr[] = {4, 3, 6, 2, 1, 6, 7};
   Output: Missing = 5, Repeating = 6
Explanation: In the array, 5 is missing and 6 occurs twice
************ Using two math equation *****************
let a and b be the two variable ,where a represent the missing and b represent the repeating element.
let N be the size of array
Sum of first N natural number (S) = N*(N+1)/2
Sum of square of first N natural number (Ssq) = N*(N+1)(2N+1)/6
Iterate through a loop from i = 1….N and do the following : S -= A[i], SSq -= (A[i]*A[i])
It will give two equations 
a – b = s
a^2 – b^2 = sq 
a + b = (sq/s)
*/
#include<iostream>
#include<vector>
using namespace std;
void repeatedNumber(const vector<int>& arr){
    int n = arr.size();
    int s = (n*(n+1))/2;
    int sq = (n*(n+1)*(2*n+1))/6;

    int missing = 0, repeating = 0;
    for(int i = 0; i < n; i++){
        s -= arr[i];
        sq -= arr[i]*arr[i];
    }
    missing = (s + sq/s)/2;
    repeating = missing - s;

    cout <<"Repeating element :" << repeating << endl;
    cout <<"Missing element :" << missing;
}

int main(void){
    vector<int> arr = {4, 3, 6, 2, 1, 6, 7};
    repeatedNumber(arr);
    return 0;
}
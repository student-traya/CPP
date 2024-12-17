/* Find geometric sum of the series using recursion
Given an integer n, we need to find the geometric sum of the following series...
1 + 1/3 + 1/9 + 1/27 + … + 1/(3^n)
Explanation:Input N = 5 
Output: 1.49794
Input: N = 7
Output: 1.49977
*/
#include<iostream>
#include<math.h>
using namespace std;
double sum(int n){
    if(n == 0)
    return 1;
    double ans = 1/(double)pow(3,n) + sum(n-1);
    return ans;
}
int main(){
    int n = 5;
    cout << "Sum is: " << sum(n) << endl;
    return 0;
}
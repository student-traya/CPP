#include<iostream>
#include<queue>
using namespace std;
int kthSmallest(int arr[], int N, int K){
priority_queue<int> pq;
for(int i = 0; i<N; i++){
    pq.push(arr[i]);
    if(pq.size()>K)
        pq.pop();
}
return pq.top();
}

int main(){
    int N = 10;
    int arr[N] = {12, 3, 5, 7, 19};
    int K = 2;
    cout << "kthSmallest element is :" << kthSmallest(arr,N,K);
    return 0;
}
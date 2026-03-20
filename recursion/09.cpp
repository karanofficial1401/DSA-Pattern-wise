#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// 1,2,3,4,5,6   =>   6,5,4,3,2,1    using single pointer 

void ReverseArray(int i, int n, vector<int>&arr){
    if(i>=n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    ReverseArray(i+1,n,arr);
}

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    ReverseArray(0,n,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}




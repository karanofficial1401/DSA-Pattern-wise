#include<iostream>
#include<vector>
using namespace std;

// 1,2,3,4,5,6     =>   6,5,4,3,2,1   using two pointer

void ReverseArray(int l,int r, vector<int>&arr){
    if(l>=r)
    return;
    swap(arr[l],arr[r]);
    ReverseArray(l+1,r-1,arr);
}

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    ReverseArray(0,n-1,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
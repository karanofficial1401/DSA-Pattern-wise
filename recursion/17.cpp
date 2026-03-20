#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&arr, int l, int r){
    if(l>=r) return;
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverseArray(arr, l+1, r-1);
}

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    reverseArray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
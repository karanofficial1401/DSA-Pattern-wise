#include<iostream>
#include<vector>
using namespace std;

// frequent count pattern

int frequent(int number, int n, vector<int>&arr){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==number)
        cnt = cnt+1;
    }
    return cnt;
}

int main(){
    vector<int>arr = {1,2,1,3,3,3,1,1,4,2};
    int n = arr.size();
    cout<<frequent(4,n,arr);
    return 0;
}
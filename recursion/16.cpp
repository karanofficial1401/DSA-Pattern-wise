#include<iostream>
using namespace std;

// print the array

void print(int arr[], int index, int n){
    if(index==n){
        return;
    }
    cout<<arr[index]<<" ";
    print(arr,index+1,n);
}

void print1(int nums[], int i){
    if(i==-1){
        return;
    }
    cout<<nums[i]<<" ";
    print1(nums, i-1);
}

int main(){
    int arr[] = {3,7,4,1,5};
    int nums[] = {4,1,5,2,6};
    // print(arr,0,5);
    print1(nums, 4);
}
// Prefix ans suffix;

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    
    // Range sum Query

    // vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    // int n = arr.size();
    // vector<int>prefix(n);
    // prefix[0] = arr[0];
    // for(int i=1;i<n;i++){
    //     prefix[i]=prefix[i-1]+arr[i];
    // }
    // int l = 2;
    // int r = 5;
    // int sum = prefix[r]-prefix[l-1];
    // cout<<sum;
    // return 0;


    // How to find all the subarray

    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<arr[k];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;



    // Maximum subarray sum

    // int maxSum = 0;
    // for(int i=0;i<n;i++){
    //     int currSum = 0;
    //     for(int j=i;j<n;j++){
    //         currSum+=arr[j];
    //         maxSum = max(maxSum,currSum);
    //     }
    // }
    // cout<<maxSum;
    // return 0;



    // // Optimal

    // int currSum = 0;
    // int MaxSum = INT_MIN;
    // for(int i=0;i<n;i++){
    //     currSum+=arr[i];
    //     MaxSum = max(MaxSum,currSum);
    //     if(currSum<0)
    //     currSum = 0;
    // }
    // cout<<MaxSum;
    // return 0;


    // // Subarray sum equals k

    // vector<int>arr = {9,4,20,3,10,5};
    // int k = 33;
    // int n = arr.size();
    // int count  = 0;
    // for(int i=0;i<n;i++){
    //     int currSum = 0;
    //     for(int j=i;j<n;j++){
    //         currSum+=arr[j];
    //         if(currSum==k)
    //             count++;
    //     }
    // }
    // cout<<count;
    // return 0;


   
 
}
#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>
#include<climits>
using namespace std;

// Basics of Array

int main(){
// int arr[5] = {1,2,3,4,5};
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;


// Minimum value

// int arr[7] = {11,4,5,2,3,9,8};
//     int Mini = INT_MAX;
//     for(int i=0;i<7;i++){
//         if(arr[i]<Mini)
//         Mini = arr[i];
//     }
//     cout<<Mini;
//     return 0;


// Maximum Value


// int arr[5] = {4,5,11,2,8};
// int maxi = INT_MIN;
// for(int i=0;i<5;i++){
//     if(arr[i]>maxi)
//     maxi = arr[i];
// }
// cout<<maxi;
// return 0;




// Search element

// int arr[8] = {4,5,1,2,3,7,8,9};
// int ele = 7;
// for(int i=0;i<8;i++){
//     if(arr[i]==ele){
//         cout<<i;
//     }
// }
// return 0;


// Sum of n Natural Numbers

// int arr[5] = {1,2,3,4,5};
// int sum = 0;
// for(int i=0;i<5;i++){
//     sum+=arr[i];
// }
// cout<<"The sum is: "<<sum;
// return 0;



// Leap Year

// int n;
// cout<<"Enter the year: ";
// cin>>n;

// if(n%400==0)
//     cout<<"Leap year";
//     else if(n%4==0 && n%100!=0)
//     cout<<"Leap year";
// else
// cout<<"Not a Leap year";

// return 0;



// Reverse Integer

// int arr[5] = {4,8,5,2,1};
// int n = sizeof(arr)/sizeof(arr[0]);
// for(int i=n-1;i>=0;i--){
//     cout<<arr[i]<<" ";
// }
// return 0;



// Power of 2

// int n = 1;
// while(n<=0){
//     cout<<"False";
//     return 0;
// }
// while(n!=1){
//     if(n%2!=0){
//         cout<<"False";
//         return 0;
//     }
//     n=n/2;
// }
// cout<<"True";
// return 0;


// // Largest Element
// vector<int>arr = {4,5,1,2,3,18,7,9};
// int n = arr.size();
// sort(arr.begin(),arr.end());
// cout<<arr[n-1];
// return 0;

// Second Largest

// vector<int>arr = {1,4,52,87,1,2,7,5,4,77,5,2,7};
// int n = arr.size();
// int Largest = INT_MIN;
// int SecLargest = INT_MIN;
// for(int i=0;i<n;i++){
//     if(arr[i]>Largest){
//         SecLargest = Largest;
//         Largest = arr[i];
//     }
//     else if(arr[i]<Largest && arr[i]>SecLargest){
//          SecLargest = arr[i];
//     }
// }
// if(SecLargest==INT_MIN){
//     cout<<"There is No second Largest";
// }
// else{
//     cout<<"the second Largest is "<<SecLargest;
// }
// return 0;



// Remove duplicates

// vector<int>arr = {14,1,2,1,1,2,2};
// int n = arr.size();
// unordered_set<int>unique;
// for(int i=0;i<n;i++){
//     unique.insert(arr[i]);    
// }

// int index = 0;
// for(auto it: unique){
//     arr[index] = it;
//     index++;
// }
// cout<<index;
// return 0;



// Array is sorted or not
// vector<int> arr = {1,2,3,4,5,6,7};
//     int n = arr.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//             cout<<"false";
//             return 0;
//             }
//         }
//     }
//     cout<<"True";
//     return 0;

// Optimal

// for(int i=1;i<n;i++){
//     if(arr[i]<arr[i-1]){
//         cout<<"False";
//         return 0;
//     }
// }
// cout<<"True";
// return 0;
}
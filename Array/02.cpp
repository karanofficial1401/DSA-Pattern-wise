#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

// Two sum with sorted array


// vector<int>arr = {1,2,3,4,5};
// int target = 6;
// int n = arr.size();
// // vector<int>ans;
// //     for(int i=0;i<n-1;i++){
// //         for(int j=i+1;j<n;j++){
// //             if(arr[i]+arr[j]==target){
// //                 cout<<arr[i]<<" "<<arr[j];
// //                 return 0;
// //             }
// //         }
// //     }
// //     cout<<"False";
// //     return 0;

// // Optimal

//     int i=0,j=n-1;
//     while(i<j){
//         int sum = arr[i]+arr[j];
//         if(sum==target){
//             cout<<arr[i]<<" "<<arr[j];
//             return 0;
//         }
//         else if(sum<target){
//             i++;
//         }
//         else{
//             j--;
//         }
//     }
//     cout<<"False";
//     return 0;


// String is pallindrome or not

// string s = "madam";
// int n = s.size();
// string rev = s ;
// reverse(rev.begin(),rev.end());
// if(s==rev){
//     cout<<"yes";
// }
// else{
// cout<<"No";
// }
// return 0;


//  Optimal

// string s = "naman";
// int n = s.size();
// int i=0,j=n-1;
// while(i<j){
//     if(s[i]!=s[j]){
//         cout<<"No";
//         return 0;
//     }else{
//         i++;
//         j--;
//     }
// }
// cout<<"Yes";
// return 0;


// Moves zero to end

// vector<int>arr = {1,0,2,3,0,0,4,5,1};
// int n = arr.size();
// vector<int>temp;
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//     temp.push_back(arr[i]);
//     }
// }
// for(int i=0;i<temp.size();i++){
//     arr[i]=temp[i];
// }
// for(int i=temp.size();i<n;i++){
//     arr[i]=0;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;



//  Optimal

// int j = 0;
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         swap(arr[i],arr[j]);
//         j++;
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;



// Container with most water

// Brute 

vector<int>Height = {1,8,6,2,5,4,8,3,7};
int n = Height.size();
// int maxWater = 0;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         int width = j-i;
//         int ht = min(Height[i],Height[j]);
//         int area = width*ht;
//         maxWater = max(maxWater,area);
//     }
// }
// cout<<maxWater;
// return 0;


// Optimal

int maxWater = 0;
int lp = 0;
int rp = n-1;
while(lp<rp){
    int width = rp-lp;
    int ht = min(Height[lp],Height[rp]);
    int currWater = width*ht;
    maxWater = max(maxWater,currWater);
    Height[lp]<Height[rp]?lp++:rp--;
}
cout<<maxWater;
return 0;
}

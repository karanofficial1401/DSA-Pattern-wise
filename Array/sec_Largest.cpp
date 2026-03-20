#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

// brute force

// int main(){
//     vector<int>arr = {1,2};
//     int n = arr.size();

//     sort(arr.begin(),arr.end(),greater<int>());

//     int largest = arr[0];
//     int sec_largest = INT_MIN;

//     for(int i=1;i<n;i++){
//         if(arr[i]<largest){
//             sec_largest = arr[i];
//             break;
//         }
//     }

//     if(sec_largest == INT_MIN){
//         cout<<"second largest does not exist";
//     }
//     else{
//         cout<<sec_largest;
//     }
//     return 0;
// }



// optimal approach


int main(){
    vector<int>arr = {1,2,7,4,5,60};
    int n = arr.size();

    int largest = INT_MIN;
    int sec_largest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sec_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sec_largest){
            sec_largest = arr[i];
        }
    }

    if(sec_largest == INT_MIN){
        cout<<"second largest element is not exist";
    }
    else{
        cout<<sec_largest;
    }
    return 0;
}
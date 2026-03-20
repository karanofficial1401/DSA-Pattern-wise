#include<iostream>
using namespace std;

// Power of 2

// int myPow(int num, int n){
//     if(n==0){
//         return 1;
//     }
//     if(n==1){
//         return num;
//     }
//     return num*myPow(num,n-1);
// }

// int main(){
//     cout<<myPow(2,4);
// }




// Sum of square of n natural number

int sqSum(int n){
    if(n==1){
        return 1;
    }
    return n*n+sqSum(n-1);
}

int main(){
    cout<<sqSum(3);
}
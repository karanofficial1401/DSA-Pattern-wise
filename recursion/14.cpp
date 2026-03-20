#include<iostream>
using namespace std;

// factorial

// int fact(int num){
//     if(num==1 || num==0){
//         return 1;
//     }
//     return num*fact(num-1);
// }

// int main(){
//     int  num = 0;
//     cout<<fact(num);
// }



// Sum of n natural number

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int main(){
    int n = 5;
    cout<<sum(n);
}
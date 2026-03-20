#include<iostream>
using namespace std;

// n = 4  sum = 10

// void fun(int i, int sum)
// {
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }
//     fun(i-1,sum+i);
// }
// int main(){
//     int n;
//     fun(4,0);
//     return 0;
// }



int fun(int n){
    if(n==0)
    return 0;
    return n+fun(n-1);
}
int main(){
    int n;
    cout<<fun(4)<<endl;
}
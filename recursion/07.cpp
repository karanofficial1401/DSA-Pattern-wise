#include<iostream>
using namespace std;

// factorial of n number   n = 4  => 24

int fun(int n){
    if(n==0)
    return 1;
    return n * fun(n-1);
}

int main(){
    int n;
    cout<<fun(5)<<endl;
    return 0;
}
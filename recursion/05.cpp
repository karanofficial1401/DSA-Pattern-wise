#include<iostream>
using namespace std;

// n = 4    4 3 2 1  without using fun(i-1,n)

void fun(int i, int n){
    if(i>n)
    return; 
    fun(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    fun(1,4);
    return 0;
}
#include<iostream>
using namespace std;

// n = 4    1 2 3 4 without using fun(i+1,n)

void fun(int i, int n){
    if(i<1)
    return;
    fun(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    fun(4,4);
    return 0;
}
#include<iostream>
using namespace std;

// n=4  1 2 3 4

void fun(int i, int n){
    if(i>n)
    return;
    cout<<i<<endl;
    fun(i+1,n);
}

int main(){
    int n;
    cin>>n;
    fun(1,4);
    return 0;
}
#include<iostream>
using namespace std;

//  n = 4    4 3 2 1

void fun(int i, int n){
    if(i<1)
    return;
    cout<<i<<endl;
    fun(i-1,n);
}

int main(){
    int n;
    cin>>n;
    fun(4,4);
    return 0;
}
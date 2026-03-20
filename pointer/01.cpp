#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    // int *ptr = &a;
    // cout<<ptr<<endl;

    // float b = 20.6;
    // float *ptr1 = &b;
    // cout<<ptr1<<endl;

    int a = 25;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int b = 20;
    ptr = &b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}
#include<iostream>
using namespace std;

// print n to 1

// void fun(int n){
//     if(n==2){
//         cout<<2<<endl;
//         return;
//     }
//     cout<<n<<endl;
//     fun(n-2);
// }

// int main(){
//     int n = 10;
//     fun(n);
// }


// print 1 to n

void print(int num,int N){    // two arguments
    if(num==N){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}

void print2(int num){    // One arguments
    if(num==2){
        cout<<2<<endl;
        return;
    }
    print2(num-2);
    cout<<num<<endl;
}

int main(){
    // int N = 8;
    int num = 15;
    if(num%2==1){
        num--;
    }
    // print(num,N);
    print2(num);

}
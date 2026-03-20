#include<iostream>
#include<vector>
using namespace std;

void fun5(int n){
    if(n==0){
        cout<<"Happy Birthday";
        return;
    }
    cout<<n<<" days left for birthday\n";
    fun5(n-1);
}

int main(){
    int n = 5;
//     for(int i=n;i>0;i--){
//         cout<<i<<" days left for birthday\n";
//     }
//     cout<<"Happy Birthday";
//     return 0;


    fun5(5);




}
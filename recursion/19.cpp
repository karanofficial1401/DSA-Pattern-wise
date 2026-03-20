#include<iostream>
using namespace std;

bool checkPal(string s, int start, int end){
    if(start>=end){
        return 1;
    }
    if(s[start]!=s[end]){
        return 0;
    }else{
        return checkPal(s, start+1, end-1);
    }
}

int main(){
    string str = "naman";
    cout<<checkPal(str,0,4);
}
#include<iostream>
#include<vector>
using namespace std;

bool isPallindrome(int l, int n, string &s){
    if(l>=n/2)
    return true;
    if(s[l]!=s[n-l-1])
    return false;
    return isPallindrome(l+1,n,s);
}

int main(){
    string s = "MADAM";
    int n = s.size();
    if(isPallindrome(0,n,s))
    cout<<"Pallindrome"<<endl;
    else
    cout<<"Not Pallindrome"<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int frequent(char c, int n, string &s){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]==c)
        cnt = cnt+1;
    }
    return cnt;
} 

int main(){
    string s = "ababcbababbb";
    int n = s.size();
    cout<<frequent('b',n,s);
    return 0;
}
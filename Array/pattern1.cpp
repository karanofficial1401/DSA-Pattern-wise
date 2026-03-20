#include<iostream>
#include<vector>
#include <climits>
#include<algorithm>

using namespace std;

int main(){
    vector<int>arr = {1,2,30,4,50};
    int n = arr.size();

    int maximum = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    cout<<maximum;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int i64;
int main(){
    i64 n,d;
    cin>>n>>d;
    vector<i64>arr(n);
    for(i64 i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    i64 count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1] - arr[i] <= d){
            count++;
            i++;
        }
    }
    cout<<count;
}
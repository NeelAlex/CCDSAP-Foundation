#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,c,totalCandiesRequired;
    cin>>t;
    while(t--){
        cin>>n>>c;
        totalCandiesRequired = 0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        totalCandiesRequired = accumulate(arr.begin(),arr.end(),0);
        totalCandiesRequired > c ? cout<<"No\n" : cout<<"Yes\n";
    }
}
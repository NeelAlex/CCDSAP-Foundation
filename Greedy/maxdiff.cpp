#include<bits/stdc++.h>
using namespace std;
typedef long long int i64;
int main(){
    i64 t,n,k,diff,sum, sumK;
    cin>>t;
    while(t--){
        sum=sumK=0;
        cin>>n>>k;
        vector<i64>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        k = k>n/2 ? n-k: k;
        sumK= accumulate(arr.begin(), arr.begin()+k, 0);
        sum = accumulate(arr.begin()+k, arr.end(), 0);
        cout<<abs(sum - sumK)<<"\n";
    }
}
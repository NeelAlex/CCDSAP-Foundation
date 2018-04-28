#include<bits/stdc++.h>
using namespace std;
typedef long long int i64;

int main(){
    int t,val,result, price;
    cin>>t;
    while(t--){
        cin>>val;
        result = 0;
        for(int i = 11; i>=0 && val>0 ;i--){
            price =  pow(2,i);
            result += val / price;
            val %= price;
        }
        cout<<result<<"\n";
    }
}
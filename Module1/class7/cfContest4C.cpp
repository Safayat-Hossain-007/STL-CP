//https://codeforces.com/contest/4/problem/C
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    map<string,int> cnt;

    while(t--){
        string s;
        cin>>s;
        if(cnt[s]==0){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<cnt[s]<<endl;
        }
        cnt[s]++;

    }
}
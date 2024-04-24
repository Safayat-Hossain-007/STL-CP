#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for(int j=0;j<n;j++){
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int k = 0;k<n;k++){
            int y;
            cin>>y;
            v2.push_back(y);
        }
         for(int l = 0;l<n;l++){
            int y;
            cin>>y;
            v3.push_back(y);
        }


    }
    for(auto u: v1){
        cout<<u<<" ";
    }
    cout<<endl;
    for(auto u: v2){
        cout<<u<<" ";
    }
    cout<<endl;
    for(auto u: v3){
        cout<<u<<" ";
    }
    

}
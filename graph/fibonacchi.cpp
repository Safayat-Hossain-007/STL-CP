#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
int dp[mx];
int fibo(int n){
    //time complexity O(n)
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    
    return dp[n] = (fibo(n-1)+fibo(n-2));
    
}

int main(){
    for(int i=0;i<1000;i++){
        dp[i] = -1;
    }
    int x= fibo(6);
    cout<<x<<" "<<endl;
    

}     
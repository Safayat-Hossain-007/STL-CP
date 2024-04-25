#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n== 0){ //base case
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int x = fact(n);
    cout<<x<<" "<<endl;

}
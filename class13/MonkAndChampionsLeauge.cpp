//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/description/
#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,m;
     cin>>n>>m;
     priority_queue<int> q;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
     }
     long long ans =0;
     for(int i =0;i<m;i++){
        if(!q.empty()){
            int a = q.top();//4 3 2 2
            q.pop();

            ans += a; //4+3+2+2
            a--;//3 2 1 1
            if(a>0){
                q.push(a); //q =1 2 1 1
            }
        }
     }
     cout<<ans<<endl;
}
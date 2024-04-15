//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/

#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5+123;
int a[mx];
int main(){
   // 5
   // 1  2  3  4  5
   //-1 -1  6 24 60
   int n;
   cin>>n;
   priority_queue<int> q;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    q.push(a[i]);
    if(q.size()>=3){
        int a1;
        a1 = q.top();//3
        q.pop();

        int a2;
        a2=q.top();//2
        q.pop();

        int a3;
        a3=q.top();//1
        q.pop();

        int result =  1ll*(a1*a2*a3);
        cout<<result<<endl;
        
        q.push(a1);
        q.push(a2);
        q.push(a3);

    }
    else{
        cout<<"-1"<<endl;
    }
   }
}
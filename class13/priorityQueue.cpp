#include<bits/stdc++.h>
using namespace std;
int main(){
    //Normal queue => first in first out
    //priority queue => queue er moddhe zar "value" sob theke boro sae age ber hobe
    //priority queue => log2(n)
    // priority_queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // //priority queue tae "top()" function use korte hoy
    // //"front()" function kaj kore na priority queue tae
    // cout<<"printing out the top element of the queue"<<endl;
    // cout<<q.top()<<" "<<endl;
    // q.pop();
    // cout<<q.top()<<" "<<endl;

    // //printing out all the elements of priority queue
    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    //priority queue is simillar to multiset
    //multiset sort kae chotu theke boro
    //priority queue boro theke chotu sort kore
    //dijaskstra tae we use priority queue
 

    //changing the priority of the priority queue
    // priority_queue<int, vector<int>,greater<int> > q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // while(!q.empty()){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    // cout<<endl;
    // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    // q.push({1,2});
    // q.push({2,3});
    // q.push({2,4});
    // q.push({3,4});
    // q.push({4,4});
    // while(!q.empty()){
    //     cout<<q.top().first<<" "<<q.top().second<<" "<<endl;
    //     q.pop();
    // }

    //we can easily solve the competitive programming result soln problem with the priority queue problem 
    priority_queue<pair<int,int>> q;
    q.push({1,-2});
    q.push({2,-3});
    q.push({2,-4});
    q.push({4,-4});
    q.push({3,-4});
    while(!q.empty()){
        cout<<q.top().first<<" "<<-1*(q.top().second)<<" "<<endl;
        q.pop();
    }
}
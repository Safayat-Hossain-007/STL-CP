#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    int c1=0,c2=0,c3=0;
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='a' || s1[i] == 'e'||s1[i]=='i' || s1[i] == 'o'||s1[i]=='u' ){
            c1=c1+1;    
        }
    }
    
    for(int i=0;i<s2.length();i++){
        if(s2[i]=='a' || s2[i] == 'e'|| s2[i]=='i' || s2[i] == 'o'||s2[i]=='u' ){
            c2=c2+1;    
        }
    }
     
    for(int i=0;i<s3.length();i++){
        if(s3[i]=='a' || s3[i] == 'e'||s3[i]=='i' || s3[i] == 'o'||s3[i]=='u' ){
            c3=c3+1;    
        }
    }
     
    if(c1 == 5 && c2 == 7 && c3 ==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
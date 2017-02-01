#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ll long long
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define MOD 1000000007
#define INF 1<<28
#define MAXN 50

void recurence(int n,int inbalance,string s){
     if(n<0) return;

    if(n==0 && inbalance==0){
        cout<<s<<endl;
    }
    
    recurence(n-1,inbalance +  1, s+'(');
    if(inbalance>0)
    recurence(n-1,inbalance + -1, s+')');
}
void printWellFormedParanthesis(int n){
    recurence(2*n,0,"");
}

int main(){

 int n;
 cin>>n;

 printWellFormedParanthesis(n);

 return 0;
}

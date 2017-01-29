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

bool is_valid(int val){
    if(val>=1 && val<=26)
        return true;
    return false;
}

int count_ans=0;
void solve(string s,int start){

 int len=s.length();
 if( len == start ) {
    count_ans++;
    return;
 }
  if( (start<len) && is_valid( atoi(s.substr(start,1).c_str()) )  )
    solve(s,start+1);

  if( (start+1<len) && is_valid( atoi(s.substr(start,2).c_str()) )  )
    solve(s,start+2);

}
int main(){

 string s;
 cin>>s;

 solve(s,0);
 cout<<count_ans;

 return 0;
}

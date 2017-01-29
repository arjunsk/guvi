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


int main(){

    vector<int>a;
    vector<int>b;

    int n,m,temp;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        cin>>temp, a.pb(temp);

    for(int j=0;j<m;j++)
        cin>>temp, b.pb(temp);

    if( includes(b.begin(), b.end(), a.begin(), a.end()) )
        cout<<"True";
    else
        cout<<"False";

    return 0;
}

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

 int n;
 cin>>n;

 string arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }

 for(int i=0;i<n/2;i++){
    swap( arr[i], arr[n-1-i] );
 }

 for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
 }

 return 0;
}

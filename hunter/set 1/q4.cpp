

#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define pi acos(-1)
#define ll long long

using namespace std;

unsigned long long mod=1000000007;

int main(){

 int n;
 cin>>n;

 int arr[n];
 for(int i=0;i<n;i++)
    cin>>arr[i];

 //Using property of XOR's
 int ans=arr[0];
 for(int i=1;i<n;i++)
    ans= ans ^ arr[i];

 cout<<ans;

 return 0;
}

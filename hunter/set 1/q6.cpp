

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
 set<int> set1;

 bool flag=false;
 int ans;
 for(int i=0;i<n;i++){
    cin>>arr[i];
    if(set1.count(arr[i]) == 0 )
        set1.insert(arr[i]);
    else if(flag==false && set1.count(arr[i]) !=0 ){
        flag=true;
        ans=arr[i];
    }
 }

 cout<<ans;

 return 0;
}

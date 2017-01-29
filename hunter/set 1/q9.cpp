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

 int arr[n];
 for(int i=0;i<n;i++)
    cin>>arr[i];

 sort(arr,arr+n);
 int l=0,r=n-1;
 int minl=0,minr=n-1;
 int min_sum=INT_MAX,sum;
 while(l<r){
    sum=arr[l]+arr[r];
    if( abs(sum) < abs(min_sum) ){ // so that it is closest to zero
        min_sum=sum;
        minl=l;
        minr=r;
    }
    if(sum<0)
        l++;
    else
        r--;
 }

 cout<<arr[minl]<<" "<<arr[minr]<<endl;
 return 0;
}

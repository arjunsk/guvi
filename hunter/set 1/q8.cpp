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

// int rrr[]={1,0,-1,0};int ccc[]={0,1,0,-1};                      //4 Direction
// int rrr[]={1,1,0,-1,-1,-1,0,1};int ccc[]={0,1,1,1,0,-1,-1,-1};  //8 direction
// int rrr[]={2,1,-1,-2,-2,-1,1,2};int ccc[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int main(){

 int n;
 scanf("%d",&n);

 int arr[n];
 for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);


 //O(n^2)
 map< int, vector< pair<int,int> > > sum;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        sum[ arr[i]+arr[j] ].push_back( make_pair(i,j) );
    }
 }


 //O(n) approx
 int i,j;
 for(int k=0;k<n;k++){
    if(sum.count(arr[k])){
        for(int pair_i=0; pair_i<sum[arr[k]].size(); pair_i++){
            i=sum[ arr[k] ][pair_i].first;
            j=sum[ arr[k] ][pair_i].second;
            if(k!=i && k!=j )
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
        }
    }
 }

 // Time Complexity  O(n^2)
 // Space Complexity O(n^2)

 return 0;
}


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

 int r,c;
 cin>>r>>c;

 int arr[r][c];
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
 }

 int dp[r][c];
 int maxv=0;
 int maxi=0;
 int maxj=0;
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==0 || j==0)
            dp[i][j]=arr[i][j];
        else if( arr[i][j]==1 )
            dp[i][j]=min( min( dp[i][j-1], dp[i-1][j] ) , dp[i-1][j-1] ) + 1;
        else
            dp[i][j]= 0;

        if(dp[i][j]>maxv){
            maxv=dp[i][j];
            maxi=i;
            maxj=j;
        }
    }
 }

 cout<< "Maximum square sub-matrix with all 1's is from (" << (maxi-maxv+1) <<","<< (maxj-maxv+1) <<") to ("<< maxi<<","<<maxj<<" )"<<endl;


 //You could also use backtracking

 return 0;
}

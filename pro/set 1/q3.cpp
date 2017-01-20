#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ll long long
#define MOD 1000000007
#define INF 1<<28
#define MAXN 50

int main(){

 string a,b;
 cin>>a;
 cin>>b;

 int len_a=a.length();
 int len_b=b.length();


 int dp[len_a+1][len_b+1];

 for(int i=0;i<=len_a;i++){
    dp[i][0]=3*i; //delete
 }

 for(int j=0;j<=len_b;j++){
    dp[0][j]=4*j; //insert
 }

 for(int i=1;i<=len_a;i++){
    for(int j=1;j<=len_b;j++){
        if(a[i]==b[j]){
           dp[i][j]=dp[i-1][j-1];
        }else{
            dp[i][j]= min(
                           {3 + dp[i-1][j],  //delete
                            4 + dp[i][j-1],  //insert
                            5 + dp[i-1][j-1] //replace
                           }
                         );
        }
    }
 }


 cout<<dp[len_a][len_b];




 return 0;
}

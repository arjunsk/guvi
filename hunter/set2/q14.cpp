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

int randomise_completly(int i){
    srand(time(NULL));
    return rand()%i;
}
int main(){

 int n;
 cin>>n;

 vector<int> vec;
 int temp;
 for(int i=0;i<n;i++)
    cin>>temp, vec.pb(temp);

 random_shuffle(vec.begin(),vec.end(), randomise_completly);

 for(int i=0;i<n;i++)
    cout<< vec[i]<< " ";

 return 0;
}

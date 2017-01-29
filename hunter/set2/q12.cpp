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

struct cmp{
    bool operator () (const int &lhs, const int &rhs){
        return lhs>rhs;
    }
};

int main(){

 int n;
 cin>>n;

 vector<int> vec;
 int temp;
 for(int i=0;i<n;i++)
    cin>>temp, vec.pb(temp);

 int k;
 cin>>k;

 nth_element( vec.begin(), vec.begin()+k-1, vec.end(), cmp() );
 cout<< vec[k-1] << endl;
 return 0;
}

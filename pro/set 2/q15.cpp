
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define pi acos(-1)
#define ll long long

using namespace std;

unsigned long long mod=1000000007;

int nobits(int n){
    int res=0;
    while(n){
        n=n&(n-1);
        res++;
    }
    return res;
}

bool greaterThanComparator(const int &lhs, const int &rhs){
    return lhs > rhs;
}

bool greaterThanBitsComparator(const int &lhs, const int &rhs){
    return nobits(lhs) > nobits(rhs);
}

int main(){

 int n;
 cin>>n;

 vector<int> arr(n);
 for(int i=0;i<n;i++)
    cin>>arr[i];
 
 //Descending order by value
 sort(arr.begin(),arr.end(),greaterThanComparator );
    
 //Descending order by bits
 sort(arr.begin(),arr.end(),greaterThanBitsComparator );

 for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    
 return 0;
}

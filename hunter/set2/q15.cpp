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

 /*
 Input:

 8
 1 -3 5 -2 9 -8 -6 4

 */

 int n;
 cin>>n;

 int arr[n];

 for(int i=0;i<n;i++)
    cin>>arr[i];

 int current_max=arr[0];
 int global_max=arr[0];

 vector<int> c_vec;
 vector<int> g_vec;

 for(int i=1;i<n;i++){

    if( current_max+arr[i] > arr[i] ){
        current_max= current_max+arr[i];
        c_vec.pb( arr[i] );
    }else{
        current_max=arr[i];
        c_vec.clear();
        c_vec.pb( arr[i] );
    }

    if(current_max > global_max ){
        global_max=current_max;
        g_vec = c_vec;
    }
 }

 for(int i=0;i<g_vec.size();i++)
    cout<<g_vec[i]<<"  ";

 return 0;
}

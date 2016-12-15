

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

 // Question find "an" integer where arr[i]==i
 // Given array is sorted and distinct

 for(int i=0;i<n;i++){

    if(arr[i]<0) // i cant be -ve
        continue;

    else if(arr[i]==i){
        cout<<i;
        break;
    }
    else if(arr[i] > i ){   // if arr[i]>i  then there is no way that, the following numbers can hold the condition arr[i]==i
                            // as they are distinct and sorted
        cout<<"Nil"<<endl;
        break;

    }

 }

 return 0;
}

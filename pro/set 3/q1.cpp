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

int tot_size;
int tot_sum;
vector<int> tot_set;

bool solved=false;

void traverse(int idx, int sum_of_set1, int size_of_set1, set<int> set1 ){

    if(idx >=tot_size )
        return;

    if(tot_sum*size_of_set1 == tot_size*sum_of_set1 && size_of_set1!=0 ){
        solved=true;


        for(auto it=set1.begin();it!=set1.end();it++){
            cout<< tot_set[ *it ] <<" ";
        }
        cout<<endl;
        for(int i=0;i<tot_size;i++){
            if( set1.count(i) ==0 ){
                cout<< tot_set[i]<<" ";
            }
        }

        cout<<endl;

        exit(0);
    }

    //ARR[ idx ] not included
    traverse( idx+1, sum_of_set1, size_of_set1, set1 );

    //ARR[ idx ] included
    set1.insert(idx);
    traverse( idx+1, sum_of_set1 + tot_set[idx], size_of_set1 +1, set1 );



}

int main(){

 cin>>tot_size;
 int temp;
 for(int i=0;i<tot_size;i++){
    cin>>temp;
    tot_set.pb(temp);
    tot_sum+=temp;
 }

 int sum_of_set1=0;
 int size_of_set1=0;
 set<int> set1;

 traverse(0, sum_of_set1, size_of_set1,set1);


 return 0;
}

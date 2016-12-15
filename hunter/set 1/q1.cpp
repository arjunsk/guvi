

#include <bits/stdc++.h>

using namespace std;

unsigned long long mod=1000000007;

int main(){
 int n;
 cin>>n;

 set<string> reg_nos;
 string reg_no;

 set<string> dups;

 for(int i=0;i<n;i++){
    cin>>reg_no;

    // Convert registration number to lower case
    transform(reg_no.begin(),reg_no.end(),reg_no.begin(),::tolower);

    if(reg_nos.count(reg_no)!=0){
        dups.insert(reg_no);
    }else{
        reg_nos.insert(reg_no);
    }
 }

 for(auto itr=dups.begin();itr!=dups.end();itr++){
    cout<< *itr <<endl;
 }

 return 0;
}

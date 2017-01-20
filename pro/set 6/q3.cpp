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

 string str;
 getline(cin,str); // we convert the string to lowercase

 set<char> alphabets;
 char c;

 for(int i=0;i<str.length();i++){
    c=tolower(str[i]);
    if(c>='a' && c<='z'){
        alphabets.insert(c);
    }
 }


 if(alphabets.size()==26){
    cout<<"Is pangram!"<<endl;
 }else{
     cout<<"Not a pangram!"<<endl;
 }

 return 0;
}

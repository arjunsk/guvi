#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define pi acos(-1)
#define ll long long

#define MAX 100

using namespace std;



bool visited[100][100];
bool arr[100][100];

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int r,c;

bool valid(int x,int y){
    if( (x>=0 && x<r) && (y>=0 && y<c) && arr[x][y]==1 )
        return true;
    return false;
}
void bfs(int i,int j){
    visited[i][j]=true;
    for(int k=0;k<4;k++){
        if( valid(i+dx[k],j+dy[k]) && visited[ i+dx[k] ][ j+dy[k] ]==false ){
            bfs( i+dx[k] , j+dy[k] );
        }
    }
}



int main(){

 cin>>r>>c;

 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
 }

 memset(visited,false,sizeof visited );

 int count=0;
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(visited[i][j]==false && arr[i][j]==1 ){
            count++;
            bfs(i,j);
        }
    }
 }

 cout<<count;

 return 0;
}

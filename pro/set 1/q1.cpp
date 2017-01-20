#include <bits/stdc++.h>
using namespace std;

// USING TRIE DS

struct Trie{
    bool isLeaf;
    map<char, pair<int,Trie*> > children; //modified here
};

Trie* getNewTrieNode(){
    Trie* node = new Trie;
    node->isLeaf = false;
    return node;
}

void insert(Trie*& head, string str){

    Trie* curr = head;
    for(int i=0;i<str.length();i++){
        if (curr->children.find(str[i]) == curr->children.end()){
            curr->children[ str[i] ].second = getNewTrieNode();
            curr->children[ str[i] ].first = 0; //adding a new node : initialize
        }
        ++curr->children[ str[i] ].first;
        curr = curr->children[ str[i] ].second;
    }
    curr->isLeaf = true;
}




int maxv=0;
void longest_prefix(Trie* head) {
      if (head == NULL) return ;
      for (auto it=head->children.begin(); it!=head->children.end(); ++it) {
        maxv= max( maxv, (it->second).first );  //modified here
        longest_prefix(it->second.second);
      }
}

int main(){
    Trie* trie_head = getNewTrieNode();

    int q;
    string str;

    scanf("%d",&q);
    while(q--){
        cin>>str;
        insert(trie_head, str );
    }

    longest_prefix(trie_head);

    cout<<maxv<<endl;

    // to get the prefix, we can use substr( str[0] ,0 , maxv );

    return 0;
}

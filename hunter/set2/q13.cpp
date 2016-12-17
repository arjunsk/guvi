#include <bits/stdc++.h>

using namespace std;

struct Node{
    Node* next;
    char val;
    Node(char x){ val=x; next=NULL; }
};

class LinkedList{

 public:
     Node* _head;

     LinkedList(){
        _head = NULL;
     }

     void insert(Node* node){
        assert(node!=NULL);
        node->next = _head;
        _head = node;
     }

};

//We use list pointer here, we need to change the list._head in this case
void reverse(LinkedList* list){

    Node* prev=NULL;
    Node* current=list->_head;
    Node* next=NULL;

    while(current!=NULL){
        next= current->next;
        current->next=prev;
        prev=current;
        current=next;
    }

    list->_head=prev;
}

//We use list object here, so that list._head remains the same after processing
void print(LinkedList list){
    while( list._head !=NULL ){
        cout<< (list._head)->val <<endl;
        list._head = (list._head)->next;
    }
}

int count(LinkedList list){
    int countv=0;
    while(list._head!=NULL){
        list._head= (list._head)->next;
        countv++;
    }
    return countv;
}

bool pallindrome(LinkedList list){
    
 int countv=count(list);
 int mid=countv/2;

 stack<char> char_stack;
 
 while(list._head!=NULL){

    if(mid>0){
        char_stack.push( list._head->val );
        mid--;
    }
    else if(mid==0 && (countv%2)==1 ){
        //ie odd number of characters, we skip the middle one
        mid--;
        list._head = (list._head)->next;
    }else if(mid==0 && (countv%2)==0 ){
        //ie even number of characters
        mid--;
    }

    if(mid<0){
        cout<< char_stack.top() <<" "<< ((list._head)->val) <<endl;
        if(char_stack.top() !=  ((list._head)->val) )
            return false;
        char_stack.pop();
    }
    
    list._head=(list._head)->next;
 }

 return true;

}

int main(){

 Node n1('a');
 Node n2('b');
 Node n3('c');
 Node n4('b');
 Node n5('c');
 Node n6('b');
 Node n7('a');

 LinkedList list;

 list.insert(&n1);
 list.insert(&n2);
 list.insert(&n3);
 list.insert(&n4);
 list.insert(&n5);
 list.insert(&n6);
 list.insert(&n7);

 reverse(&list);

 //cout<<count(list)<<endl;

 if( pallindrome(list) )
    cout<<"Palindrome"<<endl;
 else
    cout<<"Not Palindrome"<<endl;



 //print(list);

 return 0;
}

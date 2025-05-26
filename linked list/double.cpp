#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp =temp->next;
    }
    return len;
}
void insertath(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    
}
void insertatt(Node* &tail,Node* &head,int d){
      if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
      }
      else{
        Node* temp=new Node(d);
      tail->next=temp;
      temp->prev=tail;
      tail=temp;  
      }
}
void insertatpos(Node* &tail,Node* &head,int pos,int d){
    if(pos==1){
        insertath(tail,head,d);
        return;
    }
    Node* temp=head;
    int c=1;  
    while(c<pos-1){
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL){
        insertatt(tail,head,d);
        return;
    }
    Node* nodetoins=new Node(d);
    nodetoins->next=temp->next;
    temp->next->prev=nodetoins;
    temp->next=nodetoins;
    nodetoins->prev=temp;
     

}
int main(){

Node* node1= new Node(10);
Node* head=NULL;
Node* tail=NULL;
print(head);
cout<<getLength(head)<<"\n";
insertath(tail,head,11);
print(head);
insertatt(tail,head,13);
print(head);
insertatpos(tail,head,2,100);
print(head);
insertatpos(tail,head,1,101);
print(head);
insertatpos(tail,head,5,102);
print(head);
    return 0;
}
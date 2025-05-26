#include<iostream>
#include<map>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int d){  
    this ->data=d;
    this->next=NULL;
}
~Node(){
   int value=this->data;
   if(this->next!=NULL){
    delete next;
    next=NULL;
   }  
}
};
void insertNode(Node* &tail,int e,int d ){
   if(tail==NULL){
    Node* newNode= new Node(d);
    tail=newNode;
    newNode->next=newNode;

   } 
   else{
    Node* curr=tail;
    while(curr->data !=e){
        curr=curr->next;
    }
    Node* temp=new Node(d);
    temp->next=curr->next;
    curr->next=temp;
   }
}

 void delNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"list is empty"<<"\n";
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //single node linked list
        if(curr==prev){
            tail=NULL;
        }
        //>=2 linked list
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
 }

void print(Node* &tail){
Node* temp=tail;
do{
    cout<<tail->data<<" ";
    tail=tail->next;
}while(tail!=temp);
cout<<endl;
}
bool detectLoop(Node* head){
    if(head==NULL)
    return false;
    map<Node*,bool>visited;

    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return 1;
        }
        visited[temp]=temp;
        temp=temp->next;
    }
    return 0;

}
int main(){
Node* tail=NULL;
Node* head=NULL;
insertNode(tail,5,3);
print(tail);

insertNode(tail,3,5);
print(tail);

insertNode(tail,5,93);
print(tail);

print(tail);
if(detectLoop(tail)){
    cout<<"yes";
}
else{
    cout<<"noo";
}

}
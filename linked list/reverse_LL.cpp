#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    public:
     List(){
        head=tail=NULL;
     }
     void push_back(int data){
        Node* newNode=new Node(data);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
     }

     void printll(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
     }
     void rev(){
        Node* prev=NULL;
        Node* current=head;
        Node* next =NULL;
        tail= head;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
     }
};



int main(){
    List l;
    l.push_back(1);
    l.push_back(3);
    l.push_back(9);
    l.push_back(10);
    l.printll();
    l.rev();
    l.printll();
    return 0;
}
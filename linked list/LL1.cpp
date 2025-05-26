#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value=this ->data;
        if(this->next !=NULL){
            delete next;
            this->next=NULL;
        }
    }
};


void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPos(Node* &head, int pos, int d) {
    if (pos == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < pos - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // If we reach the end of the list or temp is NULL
    if (temp == NULL || temp->next == NULL) {
        // Assuming InsertAtTail accepts the head and the data, not tail
        InsertAtTail(head, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(int pos,Node* &head){
    if(pos==1){
        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;

    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        
        int cnt=1;
        while(cnt <pos){
            prev=curr;
            curr= curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    Node* node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1; // Initialize tail to point to the first node as well

    print(head);
    InsertAtHead(head, 12);
    print(head);
    InsertAtHead(head, 18);
    print(head);
    InsertAtTail(tail, 19);
    print(head); // Add this line to print the list after inserting at the tail
    insertAtPos(head,3,22);
    print(head);
    insertAtPos(head,1,2);
    print(head);
    insertAtPos(tail,4,22);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(3,head);
    print(head);
    return 0;
}

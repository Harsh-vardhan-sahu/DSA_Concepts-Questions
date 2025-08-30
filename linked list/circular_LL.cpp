#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printl() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void createCycle(int pos) {
        if (pos < 0) return;
        Node* temp = head;
        Node* cycleNode = NULL;
        int index = 0;
        while (temp != NULL) {
            if (index == pos) {
                cycleNode = temp;
            }
            if (temp->next == NULL) {
                temp->next = cycleNode; // create the cycle
                break;
            }
            temp = temp->next;
            index++;
        }
    }

    bool isCyclic() {
    Node* slow = head;
    Node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true; // cycle detected
        }
    }
    return false; // no cycle
}

};

int main() {
    List l1;
    l1.push_back(10);
    l1.push_back(11);
    l1.push_back(191);

    cout << "List 1: ";
    l1.printl();
    cout << "Is List 1 cyclic? " << (l1.isCyclic() ? "Yes" : "No") << endl;

    // Example with cycle
    List l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.createCycle(1); 

    cout << "\nList 2 created with a cycle (cannot print safely).\n";
    cout << "Is List 2 cyclic? " << (l2.isCyclic() ? "Yes" : "No") << endl;

    return 0;
}

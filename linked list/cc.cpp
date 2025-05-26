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

class Circularll {
private:
    Node* head;

    Node* floydDetectLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return slow;  // Loop detected
            }
        }
        return NULL;  // No loop
    }

public:
    Circularll() {
        head = NULL;
    }

    void insert(int val) {
        Node* newNode = new Node(val);

        if (!head) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    Node* getStart() {
        if (head == NULL) {
            return NULL;
        }
        Node* intersection = floydDetectLoop(head);
        if (intersection == NULL) {
            return NULL;  // No loop in the list
        }
        Node* slow = head;
        while (slow != intersection) {
            slow = slow->next;
            intersection = intersection->next;
        }
        return slow;
    }

    void removeLoop() {
        Node* startOfLoop = getStart();
        if (startOfLoop == NULL) return;  // No loop to remove

        Node* temp = startOfLoop;
        while (temp->next != startOfLoop) {
            temp = temp->next;
        }
        temp->next = NULL;  // Break the loop
    }
};

int main() {
    Circularll cl;
    cl.insert(10);
    cl.insert(20);
    cl.insert(30);
    for (int i = 100; i > 30; i = i - 10) {
        cl.insert(i);
    }
    cl.display();

    Node* startNode = cl.getStart();
    if (startNode != NULL) {
        cout << "Loop starting at: " << startNode->data << endl;
        cl.removeLoop();
        cout << "Loop removed. Displaying list again:\n";
        cl.display();
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}

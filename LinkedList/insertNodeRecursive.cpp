#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
Node *takeInput() {
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next=newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
Node *insertNode(Node *head, int pos, int data) {
    if(head == NULL) {
        if(pos == 0) {
            Node *newNode = new Node(data);
            return newNode;
        }
        return head;
    }
    Node *newNode = new Node(data);
    if(pos == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }
    head->next = insertNode(head->next, pos-1, data);
    return head;
}
void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp=temp->next;
    }
}
int main() {
    Node *head = takeInput();
    int pos, data;
    cin >> pos >> data;
    insertNode(head, pos, data);
    print(head);
}
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
Node *deleteNode(Node *head, int i) {
    Node *temp = head;
    if(temp == NULL) {
        return NULL;
    }
    if(i = 0) {
        return temp->next;
    }
    int count = 0;
    while(temp != NULL && count < i-1) {
        temp = temp->next;
        count++;
    }
    if(temp == NULL || temp->next==NULL) {
        return head;
    }
    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;
    delete a;
}
void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main() {
    Node *head = takeInput();
    print(head);
    int i;
    cin >> i;
    deleteNode(head, i);
    print(head);
} 
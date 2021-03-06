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
    if(head == NULL) {
        return NULL;
    }
    if(i == 0) {
        head = head->next;
        return head;
    }
    Node *temp = head;
    int count = 0;
    while(count < i-1) {
        count++;
        temp = temp->next;
    }
    Node *a = temp->next;
    Node *b = a->next;
    temp->next = b;
    return head;
    delete a;
}
void print(Node *head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
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
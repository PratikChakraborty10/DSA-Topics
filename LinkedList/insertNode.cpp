#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data=data;
        this->next=NULL;
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
            tail=newNode;
        }
        cin >> data;
    }
    return head;
}
void insertNode(Node *head, int i, int data) {
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    while(count < i-1) {
        temp=temp->next;
        count++;
    }
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next=a;
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
    int pos, data;
    cin >> pos >> data;
    insertNode(head, pos, data);
    print(head);
}
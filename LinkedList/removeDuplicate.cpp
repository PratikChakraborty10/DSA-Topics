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
Node *removeDuplicate(Node *head) {
    if(head == NULL) {
        return head;
    }
    Node *temp = head;
    while(temp->next != NULL) {
        if(temp->data == temp->next->data) {
            temp->next = temp->next->next;
        } else {
            temp=temp->next;
        }
    }
    return head;
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
    head = removeDuplicate(head);
    print(head);
}
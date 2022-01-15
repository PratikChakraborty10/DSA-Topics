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
Node *reverseList(Node *head) {
    /*if(head == NULL) {
        return;
    }
    reverseList(head->next);
    cout << head->data << " ";*/
    Node *dummyNode = NULL;
    while(head != NULL) {
        Node *next = head->next;
        head->next = dummyNode;
        dummyNode = head;
        head = next;
    }
    return dummyNode;
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
    print(head);
    cout << endl;
    reverseList(head);
    cout << endl;
}
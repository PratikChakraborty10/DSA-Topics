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
void printIthNode(Node *head, int i) {
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        if(count == i) 
            cout << temp->data;
        count++;
        temp = temp->next;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        Node *head = takeInput();
        int pos;
        cin >> pos;
        printIthNode(head, pos);
        cout << endl;
    }
    return 0;
}
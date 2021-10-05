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
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
int length(Node *head) {
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}
int main() {
    Node *head = takeInput();
    int ans = length(head);
    cout << ans << endl;
}
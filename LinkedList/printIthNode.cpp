#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next = NULL;

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
void printIthNode(Node *head, int i) {
    Node *curr = head;
    int count = 0;
    while(curr != NULL) {
        if(count == i) 
            cout << curr->data;
        count++;
        curr = curr -> next;
    }
}
int main() {
    
		Node *head = takeInput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
}
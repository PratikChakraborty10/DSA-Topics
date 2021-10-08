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
int findNode(Node *head, int n) {
    int ans = -1;
    int count = 0;
    Node *temp = head;
    while(temp != NULL) {
        if(temp->data == n) {
            ans = count;
            break;
        }
        temp = temp->next;
        count++;
    }
    return ans;
}
int main() {
    Node *head = takeInput();
    int val;
    cin >> val;
    int output = findNode(head, val);
    cout << output << endl;
}
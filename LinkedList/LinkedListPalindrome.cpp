#include<iostream>
#include<vector>
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
    while(data != NULL) {
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
bool isPalindrome(Node *head) {
    vector<int> arr;
    for(int i=0;i<arr.size()/2;i++) {
        if(arr[i] != arr[arr.size()-i-1]) {
            return false;
        }
        return true;
    }
}
int main() {
    Node *head = takeInput();
    
}
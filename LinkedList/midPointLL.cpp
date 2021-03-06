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
int midPoint(Node *head) {
    // if(head==NULL || head->next==NULL) {
    //     return head;
    // }
    Node *slow = head;
    Node *fast = head->next;
    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main() {
    int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeInput();
		int ans = midPoint(head);
		if (ans != NULL)
		{
			cout << ans;
		}
		cout << endl;
        // Node *head = takeInput();
        // cout << midPoint(head) << endl;

	}
	return 0;
}
#include<bits\stdc++.h>
using namespace std;

struct Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        this->data = x;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node* removeNthFromEnd(Node* head, int n) {
    Node* root1 = head;
    Node* root2 = head;

    for(int i = 0; i<n; i++){
        root2 = root2->next;
    }
    if(root2 == nullptr){
        head = head->next;
        return head;
    }
    while(root2 ->next != nullptr){
        root2 = root2->next;
        root1 = root1->next;
    }
    root1->next = root1->next->next;
    return head;
    
}

void printList(Node* head) {
  
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
  
    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    int k = 2;
    head = removeNthFromEnd(head, k);
    printList(head);

    return 0;
}
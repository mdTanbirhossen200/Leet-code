#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void circular(Node *curr, Node *head) {

    if (curr->next == nullptr) {
        curr->next = head;
        return;
    }

    circular(curr->next, head);
}

void printList(Node *head) {
    Node *curr = head;

    do {
        cout << curr->data << " ";
        curr = curr->next;

    } while (curr != head);
    cout << endl;
}

int main() {

    // create a hard coded list
    // 10->12->14->16
    Node *head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(14);
    head->next->next->next = new Node(16);

    circular(head, head);

    printList(head);

    return 0;
}

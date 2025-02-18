#include <bits\stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    struct ListNode* next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

ListNode *sortList(ListNode *head)
{
    vector<int> arr;
    ListNode *temp = head;

    // Extract values from the linked list and store them in the vector
    while (temp != nullptr)
    {
        arr.push_back(temp->val);
        temp = temp->next;
    }

    // Sort the vector
    sort(arr.begin(), arr.end());

    // Update the linked list with sorted values
    temp = head;
    for (int i = 0; temp != nullptr; i++)
    {
        temp->val = arr[i];
        temp = temp->next;
    }
    return head;
}

void printList(ListNode* curr) {
    while (curr != NULL) {
        cout << " " << curr->val;
        curr = curr->next;
    }
}

int main() {
    
    // Create a hard-coded linked list:
    // 5->4->1->3->2
    ListNode* head = new ListNode(5);
    head->next = new ListNode(4);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(2);

    head = sortList(head);

    printList(head);

    return 0;
}
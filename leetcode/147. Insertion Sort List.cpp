#include <bits/stdc++.h>
using namespace std;

struct ListNode
{

    int data;
    ListNode *next;

    ListNode(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

ListNode *insertionSortList(ListNode *head)
{
    vector<int> v;
    while (head != NULL)
    {
        v.push_back(head->data);
        head = head->next;
    }
    sort(v.begin(), v.end());
    ListNode *temp = new ListNode(0);
    ListNode *temp1 = NULL;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        temp = new ListNode(v[i]);
        temp->next = temp1;
        temp1 = temp;
    }
    return temp1;
}

void printList(ListNode *head)
{

    ListNode *curr = head;
    while (curr != nullptr)
    {
        cout << " " << curr->data;
        curr = curr->next;
    }
    cout << endl;
}

int main()
{

    // Create the linked list 2->3->4->5
    ListNode *head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(1);

    int data = 1;
    head = insertionSortList(head);
    printList(head);

    return 0;
}
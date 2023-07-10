#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{

    // Node a, b;
    // a.val = 10;
    // b.val = 20;
    // a.next = &a;

    Node *head = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // a er next a set kore

    head->next = b;
    b->next = c;

    // head er madhome b er value dekha

    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;

    print_list(head);

    return 0;
}
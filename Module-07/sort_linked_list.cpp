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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // that's mean ( a->next = b ; b->next = c )
    tail->next = newNode;
    tail = newNode;
}

// print list
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

    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    // cout << endl;

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        // cout << i->val << endl;
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            // cout << i->val << " " << j->val << endl;

            // if (i->val < j->val)     // big -> small
            if (i->val > j->val) // small -> big
            {
                swap(i->val, j->val);
            }
            cout << endl;
        }
    }
    print_list(head);

    return 0;
}
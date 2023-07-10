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

void insert_any_pos(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    // confirm to temp = pos - 1
    // cout << temp->val << endl;
    newNode->next = temp->next;
    temp->next = newNode;
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

// size
int size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        ++count;
        temp = temp->next;
    }
    return count;
}

int main()
{

    Node *head = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_list(head);
    int pos, v;
    cin >> pos >> v;

    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
    }
    {
        insert_any_pos(head, pos, v);
        cout << endl;
        print_list(head);
    }

    return 0;
}
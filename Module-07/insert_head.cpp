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

// insert head
void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);

    newNode->next = head;
    head = newNode;
}

// insert any postion
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

// insert tail
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        newNode = head;
        newNode = tail;
    }
    tail->next = newNode;
    tail = newNode;
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
    Node *tail = e;

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_list(head);
    cout << "Tail -> " << tail->val << endl;

    // insert any position
    int pos, v;
    cin >> pos >> v;

    if (pos > size(head))
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 0)
    {
        // insert head
        int hd;
        cin >> hd;

        insert_head(head, hd);
        cout << endl;
        print_list(head);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, v);
    }

    else
    {
        insert_any_pos(head, pos, v);
        cout << endl;
        print_list(head);
    }

    return 0;
}
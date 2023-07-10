#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_fun(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_back(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void insert_head(Node *&head, int val, Node *&tail)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *&tail, int val, Node *&head)
{
    Node *newNode = new Node(val);

    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    // tail = tail->next;
}

void delete_node(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    // temp->next = deleteNode->next;
    // deleteNode->next->prev = temp;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete deleteNode;
}

void delete_tail(Node *&tail, Node *&head)
{
    Node *deleteTail = tail;
    tail = tail->prev;
    delete deleteTail;
    if (tail == NULL)
    {
        head == NULL;
        return;
    }
    tail->next = NULL;
}
void delete_head(Node *&head, Node *&tail)
{
    Node *deletehead = head;
    head = head->next;
    delete deletehead;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int size_fun(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{

    // Node *head = NULL;
    // Node *tail = NULL;
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    int size = size_fun(head);

    // normal print
    print_fun(head);

    // reverse print
    print_back(tail);

    int pos;
    cin >> pos;
    if (pos >= size)
    {
        cout << "Invaild" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size - 1)
    {
        delete_tail(tail, head);
    }

    else
    {
        delete_node(head, pos);
    }

    // normal print
    print_fun(head);

    // reverse print
    print_back(tail);

    return 0;
}
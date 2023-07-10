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

    // that's mean ( a->next = b ; b->next = c ) loop er madhome notun ekta ekta kore touri hocche r connect hocche.

    tail->next = newNode;
    tail = newNode;
}

void print_recursion(Node *n)
{
    // base case
    if (n == NULL)
        return;

    // Normal way
    //  cout << n->val << endl;
    //  print_recursion(n->next);

    // reverse
    print_recursion(n->next);
    cout << n->val << endl;
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

    print_recursion(head);
    cout << endl;

    return 0;
}
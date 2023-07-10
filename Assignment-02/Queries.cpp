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

void add_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}
void add_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int x;
    cin >> x;
    while (x--)
    {

        int op, v;
        cin >> op >> v;
        if (op == 0)
        {
            add_head(head, tail, v);
        }
        else if (op == 1)
        {
            add_tail(head, tail, v);
        }
        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}
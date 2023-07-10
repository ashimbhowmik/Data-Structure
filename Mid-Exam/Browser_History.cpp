#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printNode(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void addNode(Node *&head, Node *&tail, string val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void printAddress(Node *&x, string add)
{
    bool flag = false;
    Node *tmp = x;
    while (tmp != NULL)
    {
        if (tmp->val == add)
        {
            flag = true;
            x = tmp;
            break;
        }
        tmp = tmp->next;
    }

    if (flag == true)
    {
        cout << x->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void printPrev(Node *&x)
{
    if (x->prev == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << x->prev->val << endl;
        x = x->prev;
    }
}

void printNext(Node *&x)
{
    if (x->next == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << x->next->val << endl;
        x = x->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        addNode(head, tail, val);
    }

    Node *x = head;
    int q;
    cin >> q;
    while (q--)
    {
        string op;
        cin >> op;
        if (op == "visit")
        {
            string add;
            cin >> add;
            printAddress(x, add);
        }
        else if (op == "prev")
        {
            printPrev(x);
        }
        else if (op == "next")
        {
            printNext(x);
        }
    }

    return 0;
}
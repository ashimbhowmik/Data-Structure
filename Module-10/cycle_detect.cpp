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

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connection

    head->next = a;

    a->next = b;

    b->next = c;

    c->next = d;

    d->next = NULL;

    Node *slow = head;
    Node *fast = head;

    bool flag = false;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            // cout << "Cycle Detected" << endl;
            // break;
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "Cycle Detected" << endl;
    }
    else
    {
        cout << "No Detected" << endl;
    }

    // print_fun(head);

    return 0;
}
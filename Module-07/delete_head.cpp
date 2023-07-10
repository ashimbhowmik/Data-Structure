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
// delete head
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;

    delete deleteNode;
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
// delete postion
void delete_postion(Node *head, int pos)
{
    Node *temp = head;
    Node *deleteNode;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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

    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid position" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_postion(head, pos);
    }

    cout << endl;
    print_list(head);

    return 0;
}
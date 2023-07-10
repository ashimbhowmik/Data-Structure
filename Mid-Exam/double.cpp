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

    Node *head = NULL;
    Node *tail = NULL;

    cout << "Oprion 1 : Print List" << endl;
    cout << "Oprion 2 : Insert a Head" << endl;
    cout << "Oprion 3 : Insert a Tail" << endl;
    cout << "Oprion 4 : Insert any position" << endl;
    cout << "Oprion 5 : Terminat " << endl;

    cout << endl;

    int val, pos, num;

    while (true)
    {
        cout << "Choice your option : ";
        cin >> num;
        if (num == 1)
        {
            print_fun(head);
        }
        else if (num == 2)
        {
            cout << "Insert a Head :" << endl;
            cin >> val;
            insert_head(head, val, tail);
        }
        else if (num == 3)
        {
            cout << "Insert a tail : ";
            cin >> val;
            insert_tail(tail, val, head);
        }

        else if (num == 4)
        {
            cout << "Insert a postion : ";
            cin >> pos;
            cout << "Insert a value : ";
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else
        {
            break;
        }
    }

    return 0;
}
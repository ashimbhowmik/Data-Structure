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
        next = NULL;
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

    tail->next = newNode;
    tail = newNode;
}

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *reverseHead = NULL;
    Node *reverseTail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
        insert_tail(reverseHead, reverseTail, val);
    }

    reverse(reverseHead, reverseHead);

    Node *tmp = head;
    Node *tmpReverse = reverseHead;
    int flag = 0;

    while (tmp != NULL)
    {
        if (tmp->val != tmpReverse->val)
        {
            flag = 1;
            break;
        }
        tmp = tmp->next;
        tmpReverse = tmpReverse->next;
    }

    if (!flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
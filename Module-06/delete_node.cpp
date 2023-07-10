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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
        // temp ekhon last node a
    }
    temp->next = newNode;
    cout << "Inserted at tail" << endl
         << endl;
}

void inset_at_postion(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inseted at position " << pos << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

// insert head
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Insert at head"
         << endl;
}

// delete form postion
void delete_funtion(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {

        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_fun()
{
    cout << "Option 1: Insert at Tail" << endl;
    cout << "Option 2: Print Linked List " << endl;
    cout << "Option 3: Insert at any postion " << endl;
    cout << "Option 4: Insert at Head" << endl;
    cout << "Option 5: Delete Positon" << endl;
    cout << "Option 6: Terminate " << endl;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        print_fun();
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Please insert a value : ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {

            int pos, v;
            cout << "Enter postion: ";
            cin >> pos;
            if (pos == 0)
            {
                cout << "This poition is not available" << endl
                     << endl;
                print_fun();
                break;
            }
            if (pos == 1)
            {
                cout << "Insert Value : ";
                cin >> v;
                insert_at_head(head, v);
            }
            else
            {
                cout << "Insert Value : ";
                cin >> v;
                inset_at_postion(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value : ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter postion: ";
            cin >> pos;
            delete_funtion(head, pos);
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main()
{
    list<int> myList;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        myList.push_back(val);
    }

    myList.sort();
    myList.unique();

    for (auto i = myList.begin(); i != myList.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
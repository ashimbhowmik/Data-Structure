#include <bits/stdc++.h>
using namespace std;

int main()
{

    // onno ekta list theke copy kore

    list<int> list2 = {1, 2, 3, 4, 5};
    list<int> myList(list2);

    // myList.clear();
    myList.resize(2);
    myList.resize(5, 100);

    // cout << myList.max_size();

    for (int v : myList)
    {
        cout << v << endl;
    }

    return 0;
}
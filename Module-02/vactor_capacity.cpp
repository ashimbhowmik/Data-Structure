#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    // cout << v.max_size() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);

    // sudhu size ta clear kore
    // v.clear();

    v.resize(2);
    // upore 2 bade sob delete hoiche,,niche 2 rekhe baki sob 100
    v.resize(7, 100);
    cout << v.size() << endl;

    // loop cholteche na cause size 0 ; but memory te value ache tai index dhore dhore pabo
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << v[0];

    return 0;
}
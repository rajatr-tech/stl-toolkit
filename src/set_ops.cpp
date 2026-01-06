#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> a = {1, 2, 3, 4};
    set<int> b = {3, 4, 5, 6};

    vector<int> result;

    set_union(a.begin(), a.end(),
              b.begin(), b.end(),
              back_inserter(result));

    cout << "Union:\n";
    for (int x : result)
        cout << x << " ";

    return 0;
}

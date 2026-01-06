#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,5,2,7,3,9};
    sort(v.begin(),v.end());
    cout<<"Sorted elements\n";
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
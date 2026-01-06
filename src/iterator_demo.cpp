#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6};
    cout<<"using iterators:";
    for(auto i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
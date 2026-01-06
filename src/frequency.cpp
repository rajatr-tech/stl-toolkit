#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> freq;
    vector<int> v= {1,2,2,3,4,4,4,5,1,2,3,4,5,5,5,5};
    for(int x:v)
    {
        freq[x]++;
    }
    cout << "Frequency of elements:\n";
    for (auto &p : freq)
        cout << p.first << " -> " << p.second << endl;
        return 0;
}
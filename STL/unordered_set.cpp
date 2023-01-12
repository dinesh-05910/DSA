#include<bits/stdc++.h>
using namespace std;
int main()
{
    //All operations - O(1).
    vector<int> v={2,2,1,3,1,5,4,4,6};
    unordered_set<int> us(v.begin(),v.end()); //Initialization.
    for(auto itr:us)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
}
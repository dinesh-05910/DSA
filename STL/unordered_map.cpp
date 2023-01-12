#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> ump;
    ump. Insert({2,3});
    ump.insert({1,2});
    ump.insert({4,3});
    for(auto itr:ump)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
}
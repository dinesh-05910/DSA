#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,2,3,4,4,5,1};
    map<int,int> mp;
    for(auto itr:v)
    {
        mp.insert(make_pair(itr,0));
    }
    for(auto itr:v)
    {
        mp[itr]++;
    }
    for(auto itr:mp)
    {
        cout<<itr.first<<"->"<<itr.second<<endl;
    }
}

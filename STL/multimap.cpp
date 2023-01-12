#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mp;
    mp.insert({2,3});
    mp.insert({2,4});
    mp.insert({1,2});
    for(auto itr:mp)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq={1,2,3,4,5};
    dq.push_front(0);
    dq.push_back(10);
    for(auto itr:dq)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    dq.erase(dq.begin());
    for(auto itr:dq)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    dq.erase(dq.begin(),dq.begin()+2);
    for(auto itr:dq)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    dq.insert(dq.begin(),0);
    deque<int> d={1,2};
    dq.insert(dq.begin()+1,d.begin(),d.end());
    for(auto itr:dq)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}
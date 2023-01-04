#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={2,3,4,5,6};
    l.push_front(1);
    l.emplace_front(0);
    l.push_back(7);
    l.emplace_back(8);
    for(auto itr:l)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    cout<<l.size()<<endl;
    //l.clear();
    //cout<<l.size()<<endl;
    //cout<<l.empty()<<endl;
    //l.insert(l.begin()+2,100); It doesn't work ..we can't move iterator in this way in lists.
    list<int>::iterator itr=l.begin();
    advance(itr,2); //To Increment the iterator to a specified position.
    l.insert(itr,100);
    for(auto itr:l)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    cout<<*l.begin()<<endl;
    cout<<*--l.end()<<endl;
    cout<<*l.rbegin()<<endl;
    cout<<*--l.rend()<<endl;
    
    cout<<"Iteration in reverse order:"<<endl;
    for(auto itr2=l.rbegin();itr2!=l.rend();itr2++)
    {
        cout<<*itr2<<" ";
    }
    cout<<endl;
    
    l.erase(l.begin());
    for(auto itr:l)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    list<int>::iterator itr3=l.begin();
    advance(itr3,2);
    l.erase(l.begin(),itr3);
    for(auto itr:l)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    list<int> s1={1,2,3};
    list<int> s2={4,5,6};
    s1.swap(s2);
    for(auto itr:s1)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
}
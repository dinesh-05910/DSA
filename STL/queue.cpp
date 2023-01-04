#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.back()+=1;
    cout<<q.back()<<endl;
    list<int> l={10,20,30,40,50}; 
    queue<int,list<int>> q2(l); //Queue can be initialized with list,deque,another queue.
    while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
}
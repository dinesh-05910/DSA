#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Push,Pop- O(logn)
    //top - O(1)
    vector<int> v={2,3,1,5,4};
    priority_queue<int,vector<int>> pq(v.begin(),v.end()); //Initialization, Max Heap
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    priority_queue<int,vector<int>,greater<int>> pq2(v.begin(),v.end()); //Initialization, Min Heap
    while(!pq2.empty())
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //LIFO
    stack<int> s;
    vector<int> v={1,2,3,4,5};
    stack<int,vector<int>> s2(v); //Initializing a stack with vector.
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    s.push(100);
    cout<<s.size()<<endl;
    stack<int> s3;
    s3.push(10);
    s3.push(20);
    //s.swap(s2) It doesn't work because s,s2 structures are different.
    s.swap(s3);
    cout<<s.size()<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //All Operations -> O(logn)
    set<int> s;
    vector<int> v={20,10,30};
    set<int> s2(v.begin(),v.end()); //Initialization.
    s.insert(2);
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(10);
    for(auto itr:s)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    //auto itr=s.find(3);
    //s.erase(itr);
    //s.erase(2);
    //auto itr1=s.find(2);
    //auto itr2=s.find(3);  
    //s.erase(itr1,itr2);   //[start,end) It doesn't include 3.
    for(auto itr:s)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    //lower_bound() -> It points to the first occurance of element . If not present it points to immediate greater element.
    auto it=s.lower_bound(5);
    cout<<*it<<endl;
    
    //upper_bound() -> It points to the immediate highest occurance of the element.
    auto it2=s.upper_bound(3);
    cout<<*it2<<endl;
    
}
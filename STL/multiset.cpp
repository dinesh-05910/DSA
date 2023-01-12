#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    cout<<ms.size()<<endl;
    //ms.erase(1);  //Erase an element (all occurances).
    ms.erase(ms.find(1)); //Erases the address (first occurance of 1).
    cout<<ms.size()<<endl;
    auto itr=ms.find(1);
    advance(itr,2);
    ms.erase(ms.find(1),itr);
    for(auto itr:ms)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    vector<int> v={2,2,1,1,3,4};
    multiset<int> ms2(v.begin(),v.end()); //Initialization.
    for(auto itr:ms2)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
}

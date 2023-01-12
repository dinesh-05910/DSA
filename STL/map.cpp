#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;
    mp.insert({2,3});
    mp.insert({3,4});
    mp.insert({2,4});
    mp.insert(make_pair(4,5));
    for(auto itr:mp)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    cout<<"Another way:"<<endl;
    map<pair<int,int>,int> mp2;
    //mp2.insert({2,3},2);
    //mp2.insert({3,4},3);
    mp2[{2,3}]=2;
    mp2[{3,4}]=4;
    for(auto itr:mp2)
    {
        //cout<<itr.first<<" "<<itr.second<<endl;
        cout<<itr.first.second<<" "<<itr.second<<endl;
    }
    cout<<"Ex:"<<endl;
    auto itr=mp.find(2);  
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    
    cout<<"Ex2:"<<endl;
    auto itr2=mp.lower_bound(3);
    cout<<(*itr2).first<<" "<<(*itr2).second<<endl;
    
    cout<<"Ex3:"<<endl;
    auto itr3=mp.upper_bound(2);
    cout<<(*itr3).first<<" "<<(*itr3).second<<endl;
    
    
}
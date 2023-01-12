#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    if(p1.second==p2.second)
    {
        if(p1.first>p2.first) return true;
        else return false;
    }
}
int main()
{
    vector<int> v={3,2,1,5,4};
    //sort(v.begin(),v.end());  //Ascending Order
    sort(v.begin(),v.end(),greater<int>()); //Descending Order
    for(auto itr:v)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v2={{1,2},{2,1},{4,1}};
    //Sort it according to the second element
    //If second element is same then sort it acc to first element but in Descending.
    sort(v2.begin(),v2.end(),comp); //Custom Sorting
    for(auto itr:v2)
    {
        cout<<itr.first<<"->"<<itr.second<<endl; 
    }
    
    cout<<*max_element(v.begin(),v.end())<<endl; //Maximum element.
    cout<<*min_element(v.begin(),v.end())<<endl; //Minimum element.
    cout<<"No of set bits:"<<__builtin_popcount(v[0])<<endl;
    cout<<"permutations:"<<endl;
    string str1="321";
    //Always start in sorted order for permutations.
    sort(str1.begin(),str1.end());
    do{
        cout<<str1<<endl;
    }while(next_permutation(str1.begin(),str1.end()));
}
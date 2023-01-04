#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,1,4,5};  //Declaration of a Vector
    vector<int>::iterator itr=v.begin(); //Iterator Method-1
    for(;itr!=v.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(auto itr=v.begin();itr!=v.end();itr++) //Iterator Method-2
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(auto itr:v)  //Iterator Method-3
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    vector<pair<int,int>> v2={{2,3},{1,4},{5,6}};  //Declaration of Vector with pairs
    for(auto itr:v2) //Iterator Method-1 for Pairs Vector
    {
        cout<<itr.first<<" ";
    }
    cout<<endl;
    for(auto itr=v2.begin();itr!=v2.end();itr++) //Iterator Method-2 for Pairs Vector  
    {
        cout<<itr->second<<" ";
    }
    cout<<endl;
    
    vector<int> v3(v);  //Initializing a vector with another vector
    for(auto itr:v3)  //Iterator 
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    //Methods to Access the Elements
    cout<<*v.begin()<<endl;   //Beginning 
    cout<<*v.rbegin()<<endl;  //Reverse Begin/End
    cout<<*--v.end()<<endl;   //End of the Vector ...end() points to null so we do -- to get last
    cout<<*--v.rend()<<endl;  //Reverse End/Begin ...rend() points to initial before element so we do -- to get first
    
    for(auto itr=v.rbegin();itr!=v.rend();itr++)  //Iterating in Reverse Order.
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
    vector<int> v4={100,200,300,400,500}; 
    v4.erase(v4.begin()); //Removing the first element.
    cout<<"After removing the beginning"<<endl;
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    v4.erase(v4.begin()+2);  //Removing the third element.
    cout<<"After removing the element"<<endl;
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    v4.erase(v4.begin(),v4.begin()+2);  //[start,end) Removes 200,300 not 500.
    cout<<"After removing the elements"<<endl;
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    v4.insert(v4.begin(),100); //Inserts the 100 at beginning position.
    cout<<"After Inserting the element"<<endl;  
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    v4.insert(v4.begin()+1,2,300); //Inserts 300,300 at first position. Only works to insert 2 same numbers not different.
    cout<<"After Inserting the elements"<<endl;
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    vector<int> copy={200,250}; 
    v4.insert(v4.begin()+1,copy.begin(),copy.end()); //Method to insert two different elements at a specified position.
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    cout<<v4.size()<<endl; //Size of a vector
    v4.pop_back(); //Deletes the last element. It doesn't return so cout<< doesn't work.
    cout<<"After Deleting the last element"<<endl;
    for(auto itr:v4)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    vector<int> demo={1,2,3};
    vector<int> swapdemo={4,5,6};
    demo.swap(swapdemo); //Swap two vectors.
    cout<<"After Swapping"<<endl;
    for(auto itr:demo)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    for(auto itr:swapdemo)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    
    cout<<swapdemo.empty()<<endl; //Checks whether the vector is empty or not.
    swapdemo.clear(); //Clears the Vector.
    cout<<swapdemo.empty(); 
    
}
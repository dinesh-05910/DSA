//https://practice.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty[]=-1&page=1&query=problemTypefunctionaldifficulty[]-1page1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-all-factorial-numbers-less-than-or-equal-to-n
#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    long long fact(long long n)
    {
        if(n==1) return 1;
        return n*fact(n-1);
    }
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> v;
        for(long long i=1;i<=N;i++)
        {
            long long ans=fact(i);
            if(ans<=N) v.push_back(ans);
            else break;
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}

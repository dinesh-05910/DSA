#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string &s,int l)
{
    if(l>=s.length()/2) return true;
    if(s[l]!=s[s.length()-1-l]) return false;
    return is_palindrome(s,l+1);
}
int main()
{
    string s="madam";
    cout<<is_palindrome(s,0);
}
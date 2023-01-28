#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int isPalindrome(string S)
	{
	    int n=S.length();
	    int return_val=1;
	    for(int i=0;i<n/2;i++)
	    {
	        if(S[i]!=S[n-i-1])
	        {
	            return_val=0;
	            break;
	        }
	    }
	    return return_val;
	}

};

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
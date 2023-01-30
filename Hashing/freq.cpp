//https://practice.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0

#include<bits/stdc++.h>
using namespace std; 

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>P) arr.erase(arr.begin()+i);
        }
        
        unordered_map<int,int> mp;
        for(int i=0;i<=arr.size();i++)
        {
            mp[arr[i]]+=1;
        }
        
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mp[i+1];
        }
        
    }
};


int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}



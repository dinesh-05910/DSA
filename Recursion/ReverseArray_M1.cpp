//Method 1 
//Using Two Pointers
#include<bits/stdc++.h>
using namespace std;
void rev(int *arr,int l,int r)
{
    if(l>=r) return;
    swap(arr[l],arr[r]);
    rev(arr,l+1,r-1);
}
int main()
{
    int arr[]={2,3,1,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,n-1);
    cout<<"After Reversing:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
//Method 2
#include<bits/stdc++.h>
using namespace std;
void rev(int *arr,int l,int n)
{
    if(l>=n/2) return;
    swap(arr[l],arr[n-l-1]);
    rev(arr,l+1,n);
}
int main()
{
    int arr[]={2,3,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    rev(arr,0,n);
    cout<<"After Reversing:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
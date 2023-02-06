#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int n)
{
    if(n<=1) 
       return;
    insertionSort(arr,n-1);
    int key=arr[n-1];
    int j=n-2;
    while(arr[j]>key && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
int main()
{
    int arr[]={4,3,5,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution
{
    public:
    int select(int arr[], int i)
    {
        
        int max_pos=i;
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[max_pos]) max_pos=j;
        }
        return max_pos;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       for(int i=n-1;i>=0;i--)
       {
           int swap_ele=select(arr,i);
           swap(arr[i],arr[swap_ele]);
           
       }
    }
};

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

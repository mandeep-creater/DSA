#include<iostream>

using namespace std;

int findDuplicate(int arr[],int size)
{
    int ans=0;

    for(int i=0;i<size ;i++)
    {
        ans=ans^arr[i];
    }

    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{   
    int arr[]={2,4,1,5,3,4};

   int ans= findDuplicate(arr,6);
   cout<<ans;

    return 0;
}
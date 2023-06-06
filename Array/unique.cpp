#include<iostream>

using namespace std;

int findunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[]={2,3,4,3,2};

   int ans= findunique(arr,5);
    
    cout<<ans;

    return 0;

}
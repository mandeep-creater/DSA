#include<iostream>
using namespace std;

int firstoccur(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int  mid= start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
          ans=mid;
          end=mid-1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}

int lastoccur(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int  mid= start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
          ans=mid;
          start=mid+1;
        }
        else if(key > arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}



int main()
{
    int even[6]={1,2,3,4,3,9};
   

    cout<<" First occurenece of 3 is  at index "<<firstoccur(even,6,3)<<endl;
    
    cout<<" last occurenece of 3 is  at index "<<lastoccur(even,6,3);
  
    
}
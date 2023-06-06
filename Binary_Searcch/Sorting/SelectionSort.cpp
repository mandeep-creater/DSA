#include<iostream>
using namespace std;

int main()
{
    int arr[]={5,3,2,7,4,1};

    for(int i=0;i<5-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
          
    }

  
return 0;
}
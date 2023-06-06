#include<iostream>

using namespace std;

void PrintArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    if(i+1<size)
    {
        swap(arr[i],arr[i+1]);
    }
}




int main(){

int arr1[8]={1,3,4,5,7,2,9,6};
//int arr2[5]={2,3,5,4,1};

swapAlternate(arr1 , 8);
PrintArray(arr1 , 8);
return 0;
}
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter the elements:  ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
//Asecending 
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {    if(arr[j]<arr[i])
        {
            int temp = arr[j];
            arr[j]= arr[i];
            arr[i]=temp;
        }
        }
    }
   //Descending
       for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {    if(arr[j]>arr[i])
        {
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
        }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "The elements is: " <<arr[i]<<endl;
    }

    

    return 0;
}
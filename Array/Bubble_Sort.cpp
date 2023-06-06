#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << endl;
    int arr[n];
    cout << "Enter the elements:  ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        int counter=1;
        while(counter<n)
        {
            for(int i=0;i<n-counter;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            counter++;
        }
   
    for (int i = 0; i < n; i++)
    {
        cout << "The elements is: " <<arr[i]<<endl;
    }

    return 0;
}
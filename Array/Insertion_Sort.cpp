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

    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j >=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
   
    for (int i = 0; i < n; i++)
    {
        cout << "The elements is: " <<arr[i]<<endl;
    }

    return 0;
}
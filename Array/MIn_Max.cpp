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

   
    for (int i = 0; i < n; i++)
    {
        cout << "The elements is: " <<arr[i]<<endl;
    }

    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0;i<n;i++)
    {
      Max=max(Max,arr[i]);
      Min=min(Min,arr[i]);
    }

    cout<<Max<<endl<<Min;

    return 0;
}
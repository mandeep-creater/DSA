#include<iostream>
using namespace std;
int linera_serach(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main(){

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

    int key;
    cout<<"Enter the Element you want to check : ";
    cin>>key;
    cout<<linera_serach(arr,n,key);
return 0;
}
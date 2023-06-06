#include<iostream>
using namespace std;
int binarySerach(int arr[], int n, int key)
{
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid= (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return-1;
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
    cout<<binarySerach(arr,n,key);

return 0;
}
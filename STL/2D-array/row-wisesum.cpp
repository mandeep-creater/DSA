
#include<iostream>
using namespace std;

void printSum(int arr[][3] , int r,int c)
{
    cout<<"Printing rowWise sum ";

    for(int r=0;r<3;r++)
    {
        int sum=0;
            for(int c=0;c<3;c++)
            {
                sum +=arr[r][c];
            }
            cout<<sum<<" ";
    }
    cout<< endl;
}
int main()
{
    int arr[3][3];

    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cin>>arr[r][c];
        }
    }

    printSum(arr,3,3);
return 0;
}
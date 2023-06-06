
#include<iostream>
using namespace std;

void LongestRowSum(int arr[][3] , int r,int c)
{
   int max=INT16_MIN;

    for(int r=0;r<3;r++)
    {
        int sum=0;
            for(int c=0;c<3;c++)
            {
                sum +=arr[r][c];
            }

          if(sum>max){
            max=sum;
          }  
    }
        cout<<"The Maximumu sum is: "<<max<<endl;
    
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

    LongestRowSum(arr,3,3);
return 0;
}
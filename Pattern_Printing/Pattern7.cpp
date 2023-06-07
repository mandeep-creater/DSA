#include<iostream>
using namespace std;                        
/*

      1   
    2 1 2 
  3 2 1 2 3
4 3 2 1 2 3 4
 
*/
void Pattern7(int n) 
{
    for(int row=1; row<=n; row++)
    {

        for(int s=0 ; s < n-row ;s++)
        {
            cout<<"  ";
        }
        // for every row run the Col
        for(int col = row ; col>=1 ; col--)
            {
                cout<<col<<" ";
            }
            for(int col = 2 ; col<=row ; col++)
            {
                cout<<col<<" ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern7(4);
    return 0;
}
#include<iostream>
using namespace std;                        
/*

1       
1 2     
1 2 3   
1 2 3 4 
 
*/
void Pattern4(int n) 
{
    for(int row=1; row<=n; row++)
    {
        // for every row run the Col
        for(int col = 1 ; col<=row ; col++)
            {
                cout<<col<<" ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern4(4);
    return 0;
}
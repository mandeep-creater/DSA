#include<iostream>
using namespace std;                        
/*

* 
* * 
* * * 
* * * *
 
*/
void Pattern1(int n) 
{
    for(int row=1; row<=n; row++)
    {
        // for every row run the Col
        for(int col = 1 ; col<=row ; col++)
            {
                cout<<"* ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern1(4);
    return 0;
}
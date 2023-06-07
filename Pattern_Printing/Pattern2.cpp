#include<iostream>
using namespace std;                        
/*

* * * * 
* * * * 
* * * * 
* * * * 
 
*/
void Pattern2(int n) 
{
    for(int row=1; row<=n; row++)
    {
        // for every row run the Col
        for(int col = 1 ; col<=n ; col++)
            {
                cout<<"* ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern2(4);
    return 0;
}
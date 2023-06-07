#include<iostream>
using namespace std;                        
/*

* * * * 
* * * 
* * 
* 
 
*/
void Pattern3(int n) 
{
    for(int row=n; row>=1; row--)
    {
        // for every row run the Col
        for(int col = 1 ; col<=row; col++)
            {
                cout<<"* ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern3(4);
    return 0;
}
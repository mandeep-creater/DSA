#include<iostream>
using namespace std;                        
/*

* 
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
 
*/
void Pattern5(int n) 
{
    for(int row=0; row<=2*n; row++)
    {
        // for every row run the Col
    int totalColumnInRows =row > n ? 2*n -row: row;
        for(int col = 0 ; col<=totalColumnInRows ; col++)
            {
                cout<<"* ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern5(4);
    return 0;
}
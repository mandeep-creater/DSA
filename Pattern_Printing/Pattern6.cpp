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
void Pattern6(int n) 
{
    for(int row=0; row<=2*n; row++)
    {
        // for every row run the Col
    int totalColumnInRows =row > n ? 2*n -row: row;

    int noOfSpaces = n-totalColumnInRows;
    for (int  s = 0; s < noOfSpaces; s++)
    {
        cout<<" ";
    }
    
        for(int col = 0 ; col<=totalColumnInRows ; col++)
            {
                cout<<"* ";
            }
            cout<<endl;
    }
}

int main()
{
    Pattern6(4);
    return 0;
}
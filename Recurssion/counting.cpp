#include<iostream>
using namespace std;

int number(int n)
{
    // base case
    if(n==0)
       { 
        return 1;
       }
        cout<<n<<endl;
         number(n-1);
       
}
int main()
{
    int n;
    cout<<" Enter the number ";
    cin>>n;
    number(n);
  
return 0;
}
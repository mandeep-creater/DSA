#include<iostream>
using namespace std;

int fact(int n)
{
    // base case
    if(n==0)
       { return 1;
       }else{
        return n*fact(n-1);
       }
}
int main()
{
    int n;
    cout<<" Enter the number ";
    cin>>n;
   int ans= fact(n);
   cout<<ans;
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a=24,b=72;

    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }else{

            b=b-a;  
        }
    }
return 0;
}
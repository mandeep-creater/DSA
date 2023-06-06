#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m[2]="Manu";
    m[1]="samar";
    m[6]="ram";

    m.insert({9,"shyam"});

    for(auto i:m)
    {
        cout<<i.first<<endl;
    }    
 
 cout<<"finding -->6:"<<m.count(6);

    return 0;
}
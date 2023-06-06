#include<iostream>
#include<set>
using namespace std;

int main()
{
set<int>s;
s.insert(3);
s.insert(5);
s.insert(1);
s.insert(0);
s.insert(7);

for(auto i:s)
{
    cout<<i<<endl;
}cout<<endl;

set<int>::iterator it=s.begin();
it++;
e.erase(it);

for(auto i:s)
{
    cout<<i<<endl;
}cout<<endl;
return 0;
}
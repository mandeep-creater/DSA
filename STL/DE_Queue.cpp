#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> a;

    a.push_back(3);
    a.push_front(5);
    a.push_back(6);

    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

    a.pop_back();
    for(int i:a)
    {
        cout<<i<<" ";
    }

    cout<<"Element at first index: "<<a.at(0);

    //for clear

    a.erase(a.begin());
 

    return 0;
}
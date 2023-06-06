//it can make another array when it fill and copy all tha data in a newly created array
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v;

    cout<< " Size of "<<v.capacity()<<endl;
    v.push_back(2);
    
    cout<< " Size of "<<v.capacity()<<endl;
    v.push_back(3);
    
    cout<< " Size of "<<v.capacity()<<endl;
    v.push_back(4);
    
    cout<< " Size of "<<v.capacity()<< endl;
    
    cout<< " Size of "<<v.size()<<endl;

    cout<<"Element at index 2 : "<<v.at(2)<<endl;

    cout<<"front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    cout<< "before Pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

       cout<< "After Pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}
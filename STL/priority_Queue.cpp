#include<iostream>
#include<queue>
using namespace std;

int main()
{
// for max heap
    priority_queue<int>maxi;

    //for min heap

    priority_queue< int,vector<int>,greater<int> >min;
maxi.push(5);
maxi.push(4); 
maxi.push(3);
maxi.push(9);

int n=maxi.size();
for(int i=0;i<n;i++)
{
    cout<<maxi.top()<<" ";
    maxi.pop();

}cout<<endl;

    //min heap  
min.push(5);
min.push(4); 
min.push(3);
min.push(9);

int m=min.size();
for(int i=0;i<m;i++)
{
    cout<<min.top()<<" ";
    min.pop();

}cout<<endl;


return 0;
}
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //creation of stack

    stack<int> s;

    //push operation
    s.push(3);
    s.push(5);

    
    //pop operation;
    s.pop();


cout<<"Printing top element "<<s.top()<<endl;

if(s.empty())
{
    cout<<"Stack is Empty"<<endl;
}
else{
    cout<<"Stack is not Empty "<<endl;  
}

return 0;
}
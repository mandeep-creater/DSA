#include<iostream>
#include<stack>
using namespace std;

int main()
{

stack<string>s;
s.push("mandeep");
s.push("pratham");
s.push("keshav");
s.push("adarsh");

cout<<" Top Element: "<<s.top()<<endl;
cout<<"****************************"<<endl;
s.pop();
cout<<" Top Element: "<<s.top()<<endl;

cout<<"Size of stack : "<<s.size()<<endl;

return 0;
}
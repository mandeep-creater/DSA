#include<iostream>
#include<queue>
using namespace std;

int main()
{

    queue<string>s;

   s.push("mandeep");
s.push("pratham");
s.push("keshav");
s.push("adarsh");


cout<<" Top Element: "<<s.front()<<endl;
cout<<"****************************"<<endl;
s.pop();
cout<<" Top Element: "<<s.front()<<endl;

cout<<"Size of stack : "<<s.size()<<endl;

return 0;
}
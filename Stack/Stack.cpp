#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size=size;
        arr=new int [size];
        top=-1;
    }

    void push(int element)
    {
            if(size-top >1)
            {
                top++;
                arr[top]=element;
            }else{

                cout<<"Stack OverFlow"<<endl;
            }


    }

    void pop()
    {
            if(top >= 0)
            {
                top--;
            }
            else{
                    cout<<"Stack underFlow"<<endl;
            }
    }

    int peek()
    {
            if(top >=0 && top < size)
            {
                return arr[top];
            }
            else{

                cout<<"Stack is Empty"<<endl;
            }
    }

    bool isEmpty()
    {
            if(top == -1)
            {
                return true;
            }
            else{
                return false;
            }
    }

};

int main()
{

    Stack st(5);

    st.push(22);
     st.push(32);
         st.push(92);
             st.push(78);

             cout<<st.peek() <<endl;

             st.pop();

                cout<<st.peek() <<endl;
                    
return 0;
}
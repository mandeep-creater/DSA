#include<iostream>
using namespace std;

Class Node{
            public:
            int data;
            Node* next;

            //constructor
            Node(int d)
            {
                this->data = d;
                this->next=NULL;
            }

            ~Node()
            {
                int value= this->data;
                 if(this->next!=NULL)
                 {
                    delete next;
                    this->next = NULL;
                 }
                 cout<<"Memory is free from your memory.."<<endl;

            }

};


    void insertNode(Node* &tail , int element , int d)
    {
        if(tail==NULL)
        {
             Node* new Node = new Node(d);
             tail= newNode;
             newNode->next = newNode;
        }else{

             Node* cur = tail;
             while(curr->data != NULL)
             {
                cur = cur->next;
             }

             Node* temp = new Node(d);
             temp->next = curr->next;
             cur->next=temp;
        }
    }


    void print(Node* tail)
    {
        Node* temp=tail;
         while(tail->next != temp)
         {
            cout<<tail-> data<<" ";
            tail= tail->next;
         }
         cout<<endl;
    }

int main()
{
    Node* tail =NULL;
    insertNode(tail , 5 ,3);
    print(tail);
    return 0;
}
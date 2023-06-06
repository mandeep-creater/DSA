#include<iostream>
using namespace std;

class Node{

    public :
         int data;
         Node* next; 

    // constructor
         Node( int data){
             this->data = data;
             this-> next = NULL;
         }

    
    // destructor
~Node( int data){
             int value=  this->data ;
             if(this->next !=NULL){
                    delete next;
                    this->next= NULL;
             }
             cout<<"Memory is free from data ";
         }

};

         // inserting at head

void insertAthead( Node* &head , int data)
{
    // new node create
     Node* temp = new Node(data);
     temp->next = head;
      head = temp;
}

          // inserting at tail
void insertAtTail(Node* tail , int data)
{
    //new Node create
    Node* temp = new Node(data);
    tail->next=temp;
    tail = temp;

}

         // inserting at Position
void insertAtPosition(Node* &head,Node* &tail, int position , int data)
{

    if(position==1)
    {
        insertAthead(head, data);
        return;
    }
    Node* temp = head;
     int cnt =1;

     while(cnt < position-1)
     {
        temp =temp->next;
        cnt++;
     }

    if(temp-> next == NULL)
    {
        insertAtTail(tail , data);
        return ;
    }

     // creating NOde  for data

     Node* nodeToInsert = new Node(data);
     nodeToInsert ->next = temp -> next;
      temp->next = nodeToInsert;


}
    // deleting node

    void deleteNode(int position , Node* &head)
    {
        if(position==1)
        {
            Node* temp = head;
                head = head->next;
                //memory free start node
                temp->next=NULL;
                delete temp;

        }  
        else{
                //deleting any middle node or last node
                
                Node* curr= head;
                Node* prev = NULL;

                int cnt=1;
                while(cnt <= position)
                {
                    prev = curr;

                    curr= curr->next;
                    cnt++;
                }
                prev -> next = curr ->next;
                delete curr;
              }

    }
  
void print(Node* head)
{
     Node* temp = head;  /// ek temporary varaible mee store krwa lo

    while(temp !=NULL){
     cout << temp->data ;
    temp = temp->next;
    }cout<< endl;

}

int main()
{

Node* node1=new Node(10);

//cout<< node1->data <<endl;
//cout<< node1->next <<endl;

// head point to node 1

Node* head = node1;
Node* tail = node1;

 //insertAthead(head,12);
print (head);

 insertAtTail(tail,15); 
 print (head);


  insertAtTail(tail,12);
 print (head);

 insertAtPosition(head ,1,100);
 print (head);


 deleteNode(1,head);
 print(head);
    return 0;
}
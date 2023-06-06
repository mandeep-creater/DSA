 #include<iostream>
 using namespace std;

 class Node{

        public:
            int data;
            Node* prev;
            Node* next;

            //constructor
            Node(int d){
                this->data=d;
                this->prev=NULL;
                this->next=NULL;
                
            }

            //destructor
            ~Node()
            {
                int val = this->data;
                if(next!=NULL)
                {
                    delete next;
                    next=NULL;
                }

                cout<<"memory free:";
            }
 };

        // for printing
 void print(Node* head)
 {
    Node* temp=head;

    while(temp != NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;

    }
    cout<< endl;
 }

        // for getting length
int getlength( Node* head)
{
      int len=0;
    Node* temp=head;
   

    while(temp != NULL)
    {
        len++;
        temp = temp->next;

    }
    return len;
}
        // inserting at head

void insertAthead( Node* &head,Node* &tail, int d)
{
        if(head == NULL)
        {
                 Node* temp = new Node(d);
                 head =temp;
                 tail=temp;
        }
        else{
            
                Node* temp = new Node(d);
                temp->next= head;
                head->prev=temp;
                head=temp;
        }

}

        // inserting at Tail

void insertAttail( Node* &tail,Node* &head, int d)
{

        if(head == NULL)
        {
                 Node* temp = new Node(d);
                 head =temp;
                 tail=temp;
        }else{
                     Node* temp = new Node(d);
                     tail->next=temp;
                     temp->prev = tail;
                     tail=temp;
}
        }


        // inserting at Position
void insertAtPosition(Node* &head,Node* &tail, int position , int d)
{
    
    if(position==1)
    {
        insertAthead(tail,head, d);
        return;
    }

    Node* temp = head;
     int cnt =1;

     while(cnt < position-1)
     {
        temp =temp->next;
        cnt++;
     }
        // inserting at last Position
    if(temp-> next == NULL)
    {
        insertAttail(tail, head , d);
        return ;
    }

     // creating NOde  for data

     Node* nodeToInsert = new Node(d);
     nodeToInsert ->next = temp -> next;
     temp->next->prev=nodeToInsert;
      temp->next = nodeToInsert;
        nodeToInsert->prev=temp;
}

       // deleting node

    void deleteNode(int position , Node* &head)
    {
        if(position==1)
        {
            Node* temp = head;
            temp->next->prev=NULL;
             head = temp->next;
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
                cur->prev=NULL;
                prev -> next = curr ->next;
                cur->next = NULL:
                delete curr;
              }

    }

 int main()
 {

    Node* node1= new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

   // cout<< getlength(head)<<endl;

    insertAthead(head,tail,11);
    print(head);

    insertAttail(tail,head, 25);
    print(head);

    insertAtPosition( head,tail, 2, 100);
    print(head);


    insertAtPosition( head,tail, 3, 15);
    print(head);

     insertAtPosition( head,tail, 1, 8);
    print(head);

    return 0;
 }
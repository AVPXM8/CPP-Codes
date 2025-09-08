#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(){
        this->data=0;
        this->next=nullptr;
    }
    Node(int val){
        this->data=val;
        this->next=nullptr;

    }
};
 void insertAtEnd( Node* &head, int val){
    Node* newNode= new Node(val);
    // if empty we wiil assign
    if(head==nullptr){
         head= newNode;
        return;
    }
     Node *temp= head;
     while(temp->next!=nullptr){
        temp=temp->next;
     }
     temp->next= newNode;
 }

 // print likedlist
void printLinkedList( Node*  &head){
     Node* temp=head;
     while(temp!=nullptr){
        cout<<temp->data<<"->  ";
        temp=temp->next;
     }
     cout<<"NUll";
}
int main(){
    // Node n1;
    // Node n2(20);
    // cout<<" Node n1->data "<<n1.data<<" n1->next "<<n1.next<<endl; 
    //     cout<<" Node n2->data "<<n2.data<<" n2->next "<<n2.next<<endl; 
    Node *head = new Node(10);
    Node *second  =new Node(20);
    head->next=second;
   
   
    int n;
    cout<<"Enter the number of element you want to add in linkedlist"<<endl;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cout<<"Enter the value of the "<<i+1<<"th node"<<endl;
        cin>>a;
        insertAtEnd(head,a);
    }
     // printing the linkedlist
    Node* temp= head;
    while(temp!=nullptr){
        cout<<temp->data<< "->";
        temp=temp->next;
    }


    return 0;
}
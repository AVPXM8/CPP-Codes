#include<iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     // constructor
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
     Node * newNode= new Node(val);
     if(head==nullptr){
        head=newNode;
        return;
     }
    
     Node* temp=head;
     while(temp->next!=nullptr){
        temp=temp->next;

     }
     temp->next-newNode;
}
void print( Node * head){

    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
}
 int main(){

    Node * head= NULL;
    int n ,a;
    cout<<" How many node you wanted to create in the linkedlist"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<" Enter the value of NOde "<<i+1<<endl;
        cin>>a;
        insertAtEnd(head,a);
        cout<<"the linked list: ";
        print(head);
        
    }

    return 0;
 }
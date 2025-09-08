#include<iostream>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int val){
       data=val;
       next=nullptr;
    }
    void insertAtEnd(Node* &head, int val){
       Node* newNode=new  Node(val);
       // check if the list is empty
       if(head==nullptr)
       {
        head= newNode;
        return;
       }
       // If list  is not empty traaverse till end and insert the node
       Node *temp= head;
       while(temp!=nullptr){
        temp=temp->next;
       }
       // insert at the end
       temp->next=newNode;
       

    }
};
int main(){
    Node* first=new Node(5);
    Node* second=new Node(10000);
    first->next=second;
    Node* third=new Node(-10);
    second->next=third;
    // printing the values 
    Node* temp=first;
    ne.insertAtEnd(-10,20);
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}

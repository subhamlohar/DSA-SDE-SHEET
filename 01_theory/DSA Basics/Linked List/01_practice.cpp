#include <bits/stdc++.h>
using namespace std;

class Node{
        public:
        int data;
        Node* next;
        Node(int val){
            data=val;
            next=NULL;
            
        }
};

Node* insertAtBeginning(Node* head,int val){
    Node* newNode=new Node(val);
    if(head==NULL)head=newNode;
    else{
        newNode->next=head;
        head=newNode;
    }
    return head;
}

Node* removeFromBeginning(Node* head){
    if(head==NULL)return NULL;
    Node* temp=head;
    head=head->next;
    delete(temp);
    return head;
}


void print(Node* head){
    if(head==NULL){
        cout<<"Linked list is Empty"<<endl;
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


int main(){
    Node* head=NULL;
    head=insertAtBeginning(head,5);print(head);
    head=insertAtBeginning(head,6);print(head);
    head=insertAtBeginning(head,7);print(head);
    head=removeFromBeginning(head);print(head);
    head=removeFromBeginning(head);print(head);
    head=removeFromBeginning(head);print(head);
    return 0;
}
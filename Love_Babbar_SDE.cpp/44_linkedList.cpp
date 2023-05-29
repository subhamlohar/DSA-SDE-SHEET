#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};

void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail ->next=temp;
    tail=temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position,int d){
    Node* temp=head;
    //insert at start
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(int position,Node* &head){
    //deleting first node 
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node of last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    //created a new node
    Node* node1=new Node(10);
    cout<<node1->data<<endl;

    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);

    InsertAtHead(head,12);
    InsertAtHead(head,20);
    print(head);

    InsertAtTail(tail,13);
    print(head);

    InsertAtPosition(tail,head,5,19);
    print(head);

    deleteNode(5,head);
    print(head);

    return 0;
}
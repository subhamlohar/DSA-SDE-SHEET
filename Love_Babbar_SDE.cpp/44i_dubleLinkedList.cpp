#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &tail,Node* &head,int d){
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
    
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
        
    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    
    //insert at head
    if(position==1){
        insertAtHead(tail,head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void deleteNode(int position,Node* &head){
    //deleting first node 
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        //memory free start node
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
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//gives length of linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

int main(){
    //Node* node1=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;

    // print(head);
    // cout<<getLength(head)<<endl;;
    
    
    insertAtHead(tail,head,12);
    print(head);

    insertAtHead(tail,head,13);
    print(head);

    insertAtHead(tail,head,14);
    print(head);

    insertAtTail(tail,head,10);
    print(head);

    insertAtPosition(tail,head,1,100);
    print(head);

    deleteNode(5,head);
    print(head);
    return 0;
}
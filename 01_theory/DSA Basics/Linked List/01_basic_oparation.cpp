#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node(int val){
        next=NULL;
        data=val;
    }
};

Node* insertAtBegining(Node* head, int val) {
    Node* newNode = new Node(val);
    // if(head==NULL)head = newNode;
    // else {
        newNode->next = head;
        head=newNode;
    // }
    return head;
}

Node* removeFromBegining(Node* head) {
    if(head == NULL) return NULL;
    //node to be deleted
    Node* temp= head;
    head=head->next;
    //to delete the node from memory
    delete(temp);
    return head;
}

Node* insertAtEnd(Node* head,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
       head=newNode;
       return head;
    }
    if(head->next==NULL){
        head->next=newNode;
        return head;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
        temp->next=newNode;
        
    
    return head;
}

Node* removeFromEnd(Node* head){
    if(head==NULL)return NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    
    return head;
}

int size(Node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

Node* insertAtGivenPosition(Node* head,int val,int pos){
    Node* newNode=new Node(val);

    if(pos<1 || pos>(size(head)+1 )){
        cout<<"Invalid Position"<<endl;
        return head;
    }
    if(pos==1){
        newNode->next=head;
        head=newNode;
    }
    else{
        Node* temp=head;
        for(int i=1; i<pos-1; i++)
        temp=temp->next;
        
        newNode->next=temp->next;
        temp->next=newNode;
    }
    return head;
}

Node* removeFromGivenPosition(Node* head,int pos){
    if(pos<1||pos>size(head)){
        cout<<"Invalid pos"<<endl;
        return head;
    }
    if(pos==1){
        Node* toDel = head;
        head=head->next;
        if(toDel!=NULL)delete(toDel);
    }
    else {
        Node* temp = head;
        for(int i=1; i<pos-1; i++){
            temp=temp->next;
        }
        Node* toDel = temp->next;
        temp->next=toDel->next;
        delete(toDel);
    }
    return head;
}




void print(Node* head) {
    if(head==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


int main(){

    Node* head = NULL;
    // head = insertAtBegining(head, 5);print(head);
    head = insertAtBegining(head, 6);print(head);
    head = insertAtBegining(head, 7);print(head);
    head = insertAtBegining(head, 8);print(head);
    // head = insertAtEnd(head,9);print(head);
    head = removeFromEnd(head);print(head);
    head= insertAtGivenPosition(head,10,4);print(head);
    head = removeFromGivenPosition(head,3);print(head);

    return 0;
}
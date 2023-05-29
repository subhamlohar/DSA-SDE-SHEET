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
    newNode->next = head;
    head=newNode;
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

Node* reverse(Node* head) {
    Node *curr=head, *prev=NULL, *nxt;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    return prev;
}

int main(){
    Node* head;
    head=insertAtBegining(head,5);
    head=insertAtBegining(head,4);
    head=insertAtBegining(head,3);
    head=insertAtBegining(head,2);
    head=insertAtBegining(head,1);
    print(head);
    head=reverse(head);
    print(head);
    

    
    return 0;
}
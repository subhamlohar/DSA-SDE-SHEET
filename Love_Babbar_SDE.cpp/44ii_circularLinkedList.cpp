#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list
        Node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;

    }
}

void deleteNode(Node* &tail,int value){
     //empty list
     if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
     }
     //non empty
     else{
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //1 node Linked list
        if(curr==prev){
            tail=NULL;
        } 
        //2 node linked list
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;

     }
}

void print(Node* tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"list is Empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}


int main(){

    Node* tail=NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,6,6);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    insertNode(tail,6,6);
    print(tail);

    deleteNode(tail,5);
    print(tail);

    deleteNode(tail,6);
    print(tail);

    insertNode(tail,7,3);
    print(tail);

    


    
    return 0;
}
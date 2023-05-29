#include <bits/stdc++.h>
#define MAXSIZE 5
using namespace std;

int Queue[MAXSIZE];
int front = -1, rear = -1;

bool isEmpty() {
    if(rear==-1)return true;
    else return false;
}

bool isFull() {
    if(rear+1==MAXSIZE)return true;
    else return false;
}

void enqueue(int val) {
    if(isFull()){
        cout<<"Queue is Full" << endl;
        return;
    }
    if(isEmpty()) rear=front=0;
    else rear++;

    Queue[rear]=val;
}

void dequeue() {
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    if(front==rear){
        front=rear=-1;
    }
    else front++;
}

int Front() {
    return Queue[front];
}

void print() {
    if(isEmpty()){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    
    for(int i=front; i<=rear; i++) {
        cout << Queue[i] << " ";
    }
    cout<<endl;
}

int main(){
     dequeue();
    // enqueue(4);print();
    // enqueue(5);print();
    // enqueue(6);print();
    // enqueue(7);print();
    // enqueue(8);print();
    // enqueue(9);print();
    // dequeue();print();
    // dequeue();print();
    // dequeue();print();
    // dequeue();print();
    // dequeue();print();
    
    
    return 0;
}
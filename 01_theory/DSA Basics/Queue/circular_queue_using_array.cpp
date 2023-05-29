#include <bits/stdc++.h>
#define MAXSIZE 5
using namespace std;

int queue[MAXSIZE];
int front = -1, rear = -1;

bool isEmpty() {
    if(rear==-1)return true;
    else return false;
}

int next(int idx) {
    int next_idx = (idx+1)%MAXSIZE;
    return next_idx;
}

bool isFull() {
    if(next(rear)==front)return true;
    else return false;
}

void enqueue(int val) {
    if(isFull()){
        cout<<"Queue is Full" << endl;
        return;
    }
    if(isEmpty()) rear=front=0;
    else rear=next(rear);

    queue[rear]=val;
}

void dequeue() {
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    if(front==rear){
        front=rear=-1;
    }
    else front=next(front);
}

int front() {
    return queue[front];
}

void print() {
    for(int i=front; i<=rear; i++) {
        cout << queue[i] << " ";
    }
    cout<<endl;
}

int main(){

    
    return 0;
}
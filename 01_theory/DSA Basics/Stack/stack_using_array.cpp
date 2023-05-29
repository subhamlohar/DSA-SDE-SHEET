#include <bits/stdc++.h>
#define MAXSIZE 5
using namespace std;

int Stack[MAXSIZE];
int top = -1;

bool isFull() {
    if(top+1==MAXSIZE) return true;
    else return false;
}

bool isEmpty(){
    if(top==-1) return true;
    else return false;
}

void push(int val) {
    if(isFull()){
        cout<<"Stack is full"<<endl;
        return ;
    }
    top++;
    Stack[top]=val;
}

void pop() {
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return ;
    }
    top--;
}

int Top() {
    return Stack[top];
}
int size() {
    return top+1;
}

void print(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=top; i>=0; i--) {
        cout<<Stack[i]<<" ";
    }
    cout<<endl;

}

int main(){
    pop();
    push(9);print();
    push(8);print();
    push(7);print();
    push(6);print();
    push(5);print();
    push(4);print();
    return 0;
}
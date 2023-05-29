#include <bits/stdc++.h>
using namespace std;

//Implementation of Stack using class
class Stack{
    //Properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
            
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else
            return false;
    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();
    st.pop();
    
    
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    /*
    //Implementation of Stack using STL---------------------------------------------

    //creation of stack(LIFO)
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();
    

    //check if empty
    if(s.empty()){
        cout<<"Stack is empty."<<endl;
    }
    else{ 
        cout<<"Stack is not empty."<<endl;
    }

    //check top element
    cout<<"Top element is:"<<s.top()<<endl;

    //check size of stack

    cout<<"Size of Syack is:"<<s.size()<<endl;

    ---------------------------------------------------------------------------------
    */


    
    return 0;
}
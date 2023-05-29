#include <bits/stdc++.h>
using namespace std;

const int maxSize=5;
int arr[maxSize];
int size=0;

bool arrIsFull(){
    if(size==maxSize)return true;
    else return false;
}

bool arrIsEmpty(){
    if(size==0)return true;
    else return false;
}

void insertAtEnd(int val){
    if (arrIsFull()){
        cout<<"Array is full"<<endl;
        return;
    }
    else{
        arr[size]=val;
        size++; 
    }
}

void removeAtEnd(){
    if (arrIsEmpty()){
        cout<<"Array is empty"<<endl;
        return;
    }
    else
        size--;
}

void print(){
    if (arrIsEmpty()){
        cout<<"Array Is Empty"<<endl;
        return;
    }
    else{
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    insertAtEnd(5);print();
    insertAtEnd(6);print();
    insertAtEnd(7);print();
    insertAtEnd(8);print();
    insertAtEnd(9);print();
    insertAtEnd(9);print();
    removeAtEnd();print();
    removeAtEnd();print();
    removeAtEnd();print();
    removeAtEnd();print();
    removeAtEnd();print();
    return 0;
}
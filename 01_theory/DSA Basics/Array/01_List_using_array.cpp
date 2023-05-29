#include <bits/stdc++.h>
using namespace std;

//Declare an array
const int maxSize=5;
int arr[maxSize];
int size=0;

//check if array is full
bool arrIsFull(){
    if(size==maxSize)return true;
    else return false;
}

//check if array is empty
bool arrIsEmpty(){
    if(size==0)return true;
    else return false;
}

//Insert at end
void insertAtEnd(int val) {
    if(arrIsFull()){
        cout<<"Array is Full"<<endl;
        return;
    }
    arr[size]=val;
    size++;
}//O(1)

//remove from end
void removeFromEnd(){
    if(arrIsEmpty()){
        cout<<"array is empty"<< endl;
        return;
    }
    size--;
}//O(1)

void insertAtBeginning(int val){
    if(arrIsFull()){
        cout<<"Array is full"<<endl;
        return;
    }
    else{
        //shift existing values to the right
        for(int i=size-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        //insert at beginning
        arr[0]=val;
        size++;
    }
}//O(n)

void removeFromBeginning(){
    if(arrIsEmpty()){
        cout<<"Array is empty"<<endl;
        return;
    }
    else{
        //shift existing values to the left
        for(int i=0;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        //decreases the size of the array
        size--;
    }
}//O(n)

void insertAtGivenPosition(int val,int pos){
    if(arrIsFull()){
        cout<<"Array is full"<<endl;
        return;
    }
    //check for valid position
    if(pos>size+1 ||pos<1){
        cout<<"Invalid position"<<endl;
        return;
    }
        for(int i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=val;
        size++;
}//O(n)

void removeFromGivenPosition(int pos){
    if(arrIsEmpty()){
        cout<<"Array is empty"<<endl;
        return;
    }
    if(pos>size || pos<1){
        cout<<"invalid position"<<endl;
        return;
    }
    
    for(int i=pos;i<size;i++){
        arr[i-1]=arr[i];

    }
    size--;
}//O(n)


//Print all the elements in the array
void print(){
    if(arrIsEmpty())cout<<"array is empty"<<endl;
    else {
        for(int i=0; i<size; i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
}
//O(n)

int main(){
    // insertAtEnd(2);print();
    // insertAtEnd(3);print();
    // insertAtEnd(6);print();
    // insertAtEnd(2);print();
    // insertAtEnd(3);print();
    // insertAtEnd(6);print();
    // removeFromEnd();print();
    // removeFromEnd();print();
    // removeFromEnd();print();
    // removeFromEnd();print();
    // removeFromEnd();print();
    //--------------------------------------
    insertAtBeginning(5);print();
    insertAtBeginning(4);print();
    insertAtBeginning(3);print();
    insertAtBeginning(2);print();
    // insertAtBeginning(1);print();
    // insertAtBeginning(6);print();

    // removeFromBeginning();print();
    // removeFromBeginning();print();
    // removeFromBeginning();print();
    // removeFromBeginning();print();
    // removeFromBeginning();print();
    //--------------------------------------
    insertAtGivenPosition(9,4);print();
    removeFromGivenPosition(3);print();
    removeFromGivenPosition(2);print();

    
    return 0;3
    +++9
}
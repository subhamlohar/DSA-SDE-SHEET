#include <bits/stdc++.h>
using namespace std;


int main(){
    //create a queue
    queue<int>q;

    //push operation
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

    //size of queue
    cout<<"Size of Queue is: "<<q.size()<<endl;

    //pop operation
    q.pop();

    cout<<"Size of Queue is: "<<q.size()<<endl;

    //front and back of queue
    cout<<"Front of Queue is: "<<q.front()<<endl;
    cout<<"Back of Queue is: "<<q.back()<<endl;

    //check queue if empty
    if(q.empty()){
        cout<<"Queue is Empty."<<endl;
    }
    else{
        cout<<"Queue is not Empty."<<endl;
    }
    
    return 0;
}
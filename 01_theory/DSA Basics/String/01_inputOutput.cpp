#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverseString(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int main(){
    char name[20];

    // cout<<"Enter your name: "<<endl;
    cin>>name;

    cout<<"Your name is "<<name<<endl;
    int len=getLength(name);
    cout<<"Length "<<len<<endl;
    reverseString(name,len);
    cout<<"Reverse name is "<<name; 
    
    return 0;
}
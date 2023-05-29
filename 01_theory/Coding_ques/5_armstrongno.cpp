#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int originaln=n;

    int x=n,ctr=0;
    while(x>0){
        ctr++;
        x=x/10;

    }

    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,ctr);
        n=n/10;
    }

    if(sum==originaln){
        cout<<"Armstrong no"<<endl;
    }
    else{
        cout<<"Not armstrong no"<<endl;
    }

    return 0;
}
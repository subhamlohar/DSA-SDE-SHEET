#include <bits/stdc++.h>
using namespace std;

bool search(int arr[],int n,int k){
    //base case
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainPart=search(arr+1,n-1,k);
        return remainPart;
    }
}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int k=2;
    bool ans=search(arr,n,k);

    if(ans){
        cout<<"It's there."<<endl;
    }
    else
        cout<<"It's not there."<<endl;
    return 0;
}
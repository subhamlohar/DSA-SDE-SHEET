#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int s,int e,int k){

    if(s>e){
        return false;
    }
    int m = s+(e-s)/2;
    if(arr[m]==k){
        return true;
    }

    if(arr[m]<k){
        return binarySearch(arr,m+1,e,k);
    }
    else{
        return binarySearch(arr,s,m-1,k);
    }
}

int main(){
    int n=6;
    int arr[n]={5,6,8,4,7,9};
    int k=6;


    bool ans=binarySearch(arr,0,n-1,k);
    if(ans){
        cout<<"It's there."<<endl;
    }
    else{
        cout<<"It's not there."<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main(){
    // int arr[4]={10,20,30,40};

    // cout<<arr[3]<<endl;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    for(int i=0;i<n;i++){
        //process 1:
        //------------------------
        // if(arr[i]>maxNo){
        //     maxNo=arr[i];
        // }
        // if(arr[i]<minNo){
        //     minNo=arr[i];
        // }

        //Process 2:
        //------------------------
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
        
    }
    cout<<maxNo<<" "<<minNo<<endl;

    return 0;
}
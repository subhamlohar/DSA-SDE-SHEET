#include <bits/stdc++.h>
using namespace std;

void printAnArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int getMaxMin(int arr[],int size){
    int min=arr[0];
    int max=arr[0];

    int sum;

    for(int i=0;i<size;i++){

        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }

    //cout<<"Max="<<min<<endl;
    //cout<<"Min="<<max<<endl;

    return (max+min);
}

int main(){

    
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }

    getMaxMin(arr,size);


    return 0;
}
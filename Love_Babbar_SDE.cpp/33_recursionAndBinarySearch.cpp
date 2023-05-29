#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
    
    
}

int main(){
    int n=5;
    int arr[n]={1,2,4,4,5};
    
    bool ans = isSorted(arr, n);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}
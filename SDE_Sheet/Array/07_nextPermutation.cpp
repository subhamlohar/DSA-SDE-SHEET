#include <bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[],int n){
    int k,l;
    for(k=n-2;k>=0;k--){
        if(arr[k]<arr[k+1]){
            break;
        }
    }
    if(k<0){
        reverse(arr[0],arr[n-1]);
    }
    else{
        for(l=n-1;l<k;l--){
            if(arr[l]>arr[k]){
                break;
            }
        }
        swap(arr[k],arr[l]);
        reverse(arr[0]+k+1,arr[n-1]);
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    return 0;
}
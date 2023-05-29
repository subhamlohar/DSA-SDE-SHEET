#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}
//swap function
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int s=0;
    int e=n-1;

    while(s<e)
    {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    // for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    // }
    printArray(arr,n);

    return 0;
}
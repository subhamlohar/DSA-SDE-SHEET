#include <bits/stdc++.h>
using namespace std;

void printTwoElements(int arr[],int size){
    int i;

    for(int i=0;i<size;i++){
        if(arr[abs(arr[i])-1]>0){
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        else
            cout<<"Repeating number is "<<abs(arr[i])<<endl;
    }

    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<"The missing number is "<<(i+1)<<endl;
        }
    }

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    printTwoElements(arr,n);

    return 0;
}
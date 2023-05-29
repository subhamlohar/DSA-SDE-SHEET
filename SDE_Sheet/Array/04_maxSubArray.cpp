#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[],int size){
    int maxSum=arr[0];
    int currentSum=0;
//Kadane's algorithm
    for(int i=0;i<size;i++){
        currentSum=currentSum+arr[i];
        if(maxSum<currentSum){
            maxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }
    return maxSum;
    
}

int main(){
    
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<maxSubArray(arr,size);
    
    return 0;
}
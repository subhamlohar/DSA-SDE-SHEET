#include <bits/stdc++.h>
using namespace std;

//sum of all the elemnts in a Array using recursion

int findSum(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int remainingPart=findSum(arr+1,size-1);
        int sum=arr[0]+remainingPart;
        return sum;
    }
}

int main(){
    int size=5;
    int arr[size]={1,2,3,4,6};

    int sum =findSum(arr,size);
    cout<<sum;
    return 0;
}
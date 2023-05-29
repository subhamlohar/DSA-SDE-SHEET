// Given an array of n integers where each value represents the number of chocolates in a packet. 
// Each packet can have a variable number of chocolates. There are m students, the task is to 
// distribute chocolate packets such that: 
// 1.Each student gets one packet.
// 2.The difference between the number of chocolates in the packet with maximum chocolates and the 
// packet with minimum chocolates given to the students is minimum.
// Examples:
// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

#include <bits/stdc++.h>
using namespace std;

int getDifference(int arr[],int n,int m){

    if(m==0||n==0){
        return 0;
    }

    sort(arr,arr+n);

    int minDiff=INT_MAX;
    int diff;
    for(int i=0;i+m-1<n;i++){
        diff=arr[i+m-1]-arr[i];
        if(diff<minDiff){
            minDiff=diff;
        }
    }
    return minDiff;
}

int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<getDifference(arr,n,m);
    return 0;
}
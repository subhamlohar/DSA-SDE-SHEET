#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n){
    int buy=arr[0], maxProfit=0;
    for(int i=1;i<n;i++){
        if(buy>arr[i]){
            buy=arr[i];
        }
        else if(arr[i]-buy>maxProfit){
            maxProfit=arr[i]-buy;
        }
    }
    return maxProfit;

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<maxProfit(arr,n);
    
    return 0;
}
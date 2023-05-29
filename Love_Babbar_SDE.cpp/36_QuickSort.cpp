#include <bits/stdc++.h>
using namespace std;
    //Function to sort an array using quick sort algorithm.
    int partition (int arr[], int low, int high)
        {
        int pivot=arr[low];
        
        int cnt=0;
        for(int i=low+1;i<=high;i++){
            if(arr[i]<=pivot)
                    cnt++;
        }
        //place pivot at right position
        int pivotIndex=low+cnt;
        swap(arr[pivotIndex],arr[low]);
        
        int i=low,j=high;
        
        while(i<pivotIndex && j>pivotIndex ){
            while(arr[i]<pivot){
                i++;
            }
            
            while(arr[j]>pivot){
                j--;
            }
            
            if(i<pivotIndex && j>pivotIndex)
                    swap(arr[i++],arr[j--]);
        }
        
        return pivotIndex;
}
    
    
 void quickSort(int arr[], int low, int high)
    {
        //base case
        if(low>=high)
            return;
        
        //partition  
        int p = partition(arr,low,high);
        
        //sorting left part
        quickSort(arr,low,p-1);
        
        //sorting right part
        quickSort(arr,p+1,high);
    }
    



int main(){
    int n=10;
    int arr[n]={3,5,5,7,6,1,3,78,54,34};

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
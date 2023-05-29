#include <bits/stdc++.h>
using namespace std;



void findDuplicate(int arr[],int size)
{
    bool ifPresent=false;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++)
            if(arr[i]==arr[j]){
                ifPresent=true;
            }
        
        }
    if(ifPresent==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

       
int main(){

    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
       cin>>arr[i];
    }

    
    findDuplicate(arr,size);
    
    return 0;
}
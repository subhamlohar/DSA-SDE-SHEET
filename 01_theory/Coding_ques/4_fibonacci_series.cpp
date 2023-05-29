#include <bits/stdc++.h>
using namespace std;

//print fibonacci series upto given no
// int main(){
//     int n1=1;
//     int n2=1;

//     int c;
//     cin>>c;
//     if(c==1)
//     cout<<n1;
//     else if(c==2) 
//     cout<<n1<<" "<<n2;
//     else{
//        int arr[c]; 
//        arr[0]=n1;
//        arr[1]=n2;
//        for(int i=2;i<c;i++)
//        arr[i]=arr[i-1]+arr[i-2];
//        for(int i=0;i<c;i++)
//        cout<<arr[i]<<" ";

//        cout<<endl<<arr[c-1];

//     }
    

//     return 0;
// }

//print fibonacci series upto given range

int main(){
    int n1=1;
    int n2=1;

    int b,c;  //range from b to c
    cin>>b>>c;
    if(c==1)
    cout<<n1;
    else if(c==2) 
    cout<<n1<<" "<<n2;
    else{
       int arr[c]; 
       arr[0]=n1;
       arr[1]=n2;
       for(int i=2;i<c;i++)
       arr[i]=arr[i-1]+arr[i-2];
       for(int i=b-1;i<c;i++)
       cout<<arr[i]<<" ";

    }
    

    return 0;
}

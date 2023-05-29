#include <bits/stdc++.h>
using namespace std;
//How to create 2D Array Dynamically

int main(){
    /*
    //For Creating (n*n) size of 2D array

    int n;
    cin>>n;

    //Creating a 2D array
    int**arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    //taking input

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //taking Output

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */

   //For Creating (n*m) size of 2D array

    int row;
    cin >> row;

    int col;
    cin >> col;


    //Creating a 2D array
    int**arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //taking input

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    //taking Output

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Releasing memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }

    delete []arr;


    return 0;
}
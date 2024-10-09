#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        int min_index=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        
        int temp;
        temp = arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"inital array: ";
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr , n);
    cout<<"sorted arrray: ";
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
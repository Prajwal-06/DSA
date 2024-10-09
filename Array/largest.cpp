#include <bits/stdc++.h>
using namespace std;

int largest(int arr[] , int n){
    int max = arr[0];
    for(int i=0 ; i<n ; i++){
        if(max < arr[i]){
            max=arr[i];
        }
    }

    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int largest_number = largest(arr , n);
    cout<<endl<<"largest:"<<largest_number;
    return 0;
}
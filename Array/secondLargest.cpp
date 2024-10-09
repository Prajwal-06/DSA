#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[] , int n){
    int max = arr[0];
    int s_max= -1;
    for(int i=0 ; i<n ; i++){
        if(max < arr[i]){
            s_max = max;
            max=arr[i];
        }
        else if(arr[i] > s_max && arr[i] < max ){
            s_max = arr[i];
        }
    }

    return s_max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int second_largest = secondLargest(arr , n);
    cout<<endl<<"Second largest:"<<second_largest;
    return 0;
}
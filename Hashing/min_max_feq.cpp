#include <bits/stdc++.h>
using namespace std;

int main(){
    int max=0,min=0;
    int maxele=0,minele=0;
    int arr[] = {10,12,45,10,15,12,10};
    for(int i=0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }

    map <int,int> mpp;
    for(int i=0 ; i<7 ; i++){
        mpp[arr[i]]++;
    }
    for (auto it : mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
        if(it.second > max){
            max = it.second;
            maxele = it.first;
        }
        else{
            min = it.second;
            minele = it.first;
        }
    }

    cout<<"maximum : "<<maxele<<endl;
    cout<<"minimum : "<<minele<<endl;
    return 0;
}
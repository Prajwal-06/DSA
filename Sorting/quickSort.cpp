#include <bits/stdc++.h>
using namespace std;

int partition (vector <int> &arr , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i <= high-1){
            i++;
        }
        while(arr[j]>pivot && j >= low -1){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low]= arr[j];
    arr[j] = temp;

    return j;

}

void quickSort(vector <int> &arr , int low , int high){
    if(low<high){
        int pIndex = partition(arr , low , high);
        quickSort(arr , low , pIndex - 1);
        quickSort(arr , pIndex +1 , high );
    }
    
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "unsorted arr" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr , 0 , 9);

    cout << "sorted arr" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
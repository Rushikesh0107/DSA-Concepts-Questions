#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    if(n == 1){
        return;
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

int main(){

    int arr[] = {5,4,3,2,1};
    int n = 5;

    for(auto i : arr){
        cout<<i<<" ";
    }

    cout<<endl;

    bubbleSort(arr, n);

    for(auto i : arr){
        cout<<i<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int partition(int low, int high, int arr[]){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] >= pivot && j >= low + 1){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;

}

void quickSort(int s, int e, int arr[]){
    if(s < e){
        int p = partition(s,e,arr);
        quickSort(s, p-1, arr);
        quickSort(p+1, e, arr);
    }
}

int main(){
    int arr[] = {3,1,4,0,9,2,3,4};
    int n = 8;

    for(auto i : arr){
        cout<<i<<" ";
    }

    cout<<endl;

    quickSort(0, n-1, arr);

    for(auto i : arr){
        cout<<i<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int low, int mid, int high){

    vector<int> temp;
    int left = low;
    int right = mid+1;

    while (left <= mid && right <= high)
    {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
    
}


void mergeSort(int s, int e, int arr[]){

    if(s == e) return;
    int mid = (s + e)/2;
    mergeSort(s, mid, arr);
    mergeSort(mid + 1, e, arr);
    merge(arr, s, mid, e);

}

int main(){
    int arr[] = {2,3,5,1,3,0};
    int n = 6;
    
    for(auto i : arr){
        cout<<i<<" ";
    }

    cout<<endl;
    
    mergeSort(0, n-1, arr);

    for(auto i : arr){
        cout<<i << " ";
    }

}
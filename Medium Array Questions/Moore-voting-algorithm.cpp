#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0, candidate = 0;

    for(int i = 0; i < n; i++){
        if(count == 0){
            candidate = arr[i];
        }
        if(arr[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }

    int count1 = 0;

    for(int i = 0;i < n; i++){
        if(arr[i] == candidate){
            count1++;
        }
    }

    if(count1 > n/2){
        cout<<candidate;
    } else{
        cout<<"No majority element";
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    //here pos and neg are in equal numbers
    //there are n/2 positive and n/2 negative numbers


    int arr[] = {-1,2,-3,4,5,6,-7,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans(n,0);
    int posIndex = 0; 
    int negIndex = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }

    for(auto i : ans){
        cout<<i<<" ";
    }

    //here positve and negative number are not equal



}